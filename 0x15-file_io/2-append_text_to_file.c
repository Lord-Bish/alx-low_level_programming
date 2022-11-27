#include "main.h"

/**
 * main - appends texts on a file
 *
 * @filename - name of the file
 * @text_content - text to append
 *
 * return : 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t cnt;
	ssize_t wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);

	for (cnt = 0; text_content[cnt] != '\0'; cnt++)
		;
	{
	wr = write(fd, text_content, cnt);

	if (wr == -1)
		return (-1);
	}
	close(fd);
	return (1);
}

