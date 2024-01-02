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

    fd = open_file(filename);
    if (fd == -1)
        return (-1);

    if (text_content != NULL) {
        write_result = write_content(fd, text_content);
        if (write_result == -1) {
            close(fd);
            return (-1);
        }
    }

    close_file(fd);
    return (1);
}
