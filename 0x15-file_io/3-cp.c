#include "main.h"

#define SE STDERR_FILENO
#define MAXCNT 1204

/**
 * main - copies content feom one file to another
 * @ac - arg count
 * @av - arg as strings
 * return - 0
 */

int main(int ac, char *av[])
{
	int i_fd, o_fd;
	ssize_t wr, rd;
	char buf[MAXCNT];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	i_fd = open(av[1], O_RDONLY);
	if (i_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	o_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (o_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		rd = read(i_fd, buf, MAXCNT);
		if (rd == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (rd > 0)
		{
			wr = write(o_fd, buf, rd);
			if (wr == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (rd > 0);
	rd = close(i_fd);
	if (rd == -1)
		dprintf(SE, "Error: Can't close fd %d\n", i_fd), exit(100);
	wr = close(o_fd);
	if (wr == -1)
		dprintf(SE, "Error: Can't close fd %d\n", o_fd), exit(100);
	return (0);
}
