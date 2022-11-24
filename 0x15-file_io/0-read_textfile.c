#include "main.h"

/**
 *
 * main - reads a text file and prints it on POXIS stdout
 *
 * @filename - the name of the file to be read
 * @letters - the count of the read text
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
   int fd;
   char *buf;
   ssize_t rd, wr;
   
   buf = malloc(sizeof(char) * letters);
     
      if (!buf)
      {
	free(buf);
	return (0);
      }
   fd = open("filename", O_RDWR);
      
      if (!filename || fd == -1)
      {
	return (0);
      }
   
   rd = read(fd, buf, letters);

      if (rd == -1)
      {
	   return (0);
      }

   wr = write(STDOUT_FILENO, buf, letters);

      if (wr == -1 || rd != wr)
      {

	   return (0);
      }
	
	free(buf);

      close(fd);

      return (wr);
}
