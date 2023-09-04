#include "main.h"

/**
* append_text_to_file - appending text to a file
* @filename: pointer to file to append to
* @text_content: characters to append
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, fw, fc;
size_t len;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
if (fd == -1)
	return (-1);

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
	fw = write(fd, text_content, len);
	if (fw == -1)
		return (-1);
	fc = close(fd);
	if (fc == -1)
		return (-1);
}

return (1);
}
