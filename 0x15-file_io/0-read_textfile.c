#include "main.h"

/**
* read_textfile - reading and writing text file to standard output
* @filename: pointer to file to read
* @letters: maximum number of letters to write
*
* Return: number of letters written
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t count;
int fd, fr, fc;
char ch;

count = 0;
if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

while (count < (ssize_t)letters && read(fd, &ch, 1) > 0)
{
	fr = write(STDOUT_FILENO, &ch, 1);
	if (fr != 1)
		return (0);
	count++;
}

fc = close(fd);
if (fc == -1)
	return (0);

return (count);
}
