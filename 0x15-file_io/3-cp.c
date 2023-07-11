#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    	
	char buffer[BUFFER_SIZE];                               ssize_t bytes_read, bytes_written;
	int file_to;
	int file_from;

	if (argc != 3) {
        	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        	exit(97);
    }

    	file_from = open(argv[1], O_RDONLY);
    	if (file_from == -1) {
        	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        	exit(98);
    }

    	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    	if (file_to == -1) {
        	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        	exit(99);
    }

    	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(file_to, buffer, bytes_read);
        	if (bytes_written == -1) {
            		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            		exit(99);
        }
    }

    	if (bytes_read == -1) {
        	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        	exit(98);
    }

    	if (close(file_from) == -1) {
        	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        	exit(100);
    }

    	if (close(file_to) == -1) {
        	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        	exit(100);
    }

    	return 0;
}
