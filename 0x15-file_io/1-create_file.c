#include "main.h"                                       

/**                                                      * create_file - creates a file
 * @filename: filename.                                  * @text_content: content writed in the file.
 *                                                       * Return: 1 if it success. -1 if it fails.              */

int create_file(const char *filename, char *text_content) {
    int fd;
    size_t content_len;
    ssize_t bytes_written;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content != NULL) {
        content_len = strlen(text_content);
        bytes_written = write(fd, text_content, content_len);
        if (bytes_written < 0) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}


