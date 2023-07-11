#include "main.h"                                       

/**                                                      * create_file - creates a file
 * @filename: filename.                                  * @text_content: content writed in the file.
 *                                                       * Return: 1 if it success. -1 if it fails.              */

int create_file(const char *filename, char *text_content) {
    	int bytes_written;
	int file_descriptor;

	if (filename == NULL)
        	return -1;

    	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    	if (file_descriptor == -1)
        	return -1;

    	if (text_content != NULL) {
        bytes_written = write(file_descriptor, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(file_descriptor);
            return -1;
        }
    }

    	close(file_descriptor);
    	return 1;
}

