#ifndef _MAIN_
#define _MAIN_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int _putchar(char c);

int open_file(const char *filename) {
    return open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
}

int write_content(int fd, char *text_content) {
    size_t content_len;
    ssize_t bytes_written;

    content_len = strlen(text_content);
    bytes_written = write(fd, text_content, content_len);
    return ((bytes_written < 0) ? -1 : 1);
}

void close_file(int fd) {
    close(fd);
}

#endif
