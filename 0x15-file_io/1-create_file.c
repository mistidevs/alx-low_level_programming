#include "main.h"

/**
* create_file - creating a file with custom permissions
* @filename: pointer to file name
* @text_content: pointer to text content
*
* Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, fr, fc;
size_t len;

if (filename == NULL)
	return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
if (fd == -1)
{
	if (errno == EEXIST)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
	}
	else
		return (-1);
}

if (text_content == NULL)
{
	fc = close(fd);
	if (fc == -1)
		return (-1);
	return (1);
}
else
{
	len = strlen(text_content);
	fr = write(fd, text_content, len);
	if (fr != (int)len)
		return (-1);
	fc = close(fd);
	if (fc == -1)
		return (-1);
}

return (1);
}
