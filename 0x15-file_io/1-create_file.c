#include "main.h"

/**
 * main - creates a file and write on it
 *
 * @filename - name of the created file
 * @text_content - content of the created file
 *
 * return - file descriptor
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t cnt;
	ssize_t wr;

if (!filename)
{
	return (-1);
}
fd = open("filename", O_CREAT | O_RDWR | O_TRUNC, 0600);

if (fd == -1)
{
	return (-1);
	close(fd);
}

if (text_content)

{
for (cnt = 0; text_content[cnt] != '\0'; cnt++)
	;

wr = write(fd, text_content, cnt);

if (wr == -1)
	return (-1);
}
	close(fd);
	return (1);
}
