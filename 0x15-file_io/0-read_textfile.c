#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
int file;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    file = open(filename, O_RDONLY);
    if (file == -1) {
        return 0;
    }

    buffer = (char *)malloc(letters + 1);
    if (buffer == NULL) {
        close(file);
        return 0;
    }

    bytes_read = read(file, buffer, letters);
    if (bytes_read <= 0) {
        free(buffer);
        close(file);
        return 0;
    }

    buffer[bytes_read] = '\0'; /* Null-terminate the string */

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    free(buffer);
    close(file);

    if (bytes_written != bytes_read) {
        return 0;
    }

    return bytes_written;
}

