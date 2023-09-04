#include "main.h"

/**
* handle_fd2_open - handling openin of file2
* @fd2: pointer to file descriptor
* @file2: pointer to file to handle
*
* Return: void
*/

void handle_fd2_open(int *fd2, const char *file2)
{
if (*fd2 == -1)
{
	if (errno == EEXIST)
	{
		*fd2 = open(file2, O_WRONLY | O_TRUNC);
		if (*fd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	else
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
}
}

/**
* cp - appending from one file to another
* @file1: pointer to pull text from
* @file2: pointer to place text in
*
* Return: void
*/

void cp(const char *file1, const char *file2)
{
int fd1, fd2, fr1, fw2, fc1, fc2;
char buffer[1024];

fd2 = open(file2, O_RDWR | O_CREAT | O_EXCL, 0664);
handle_fd2_open(&fd2, file2);
fd1 = open(file1, O_RDONLY);
if (file1 == NULL || fd1 == -1)
{
	dprintf(2, "Error: Can't read from file %s\n", file1);
	exit(98);
}
while ((fr1 = read(fd1, &buffer, 1024)) > 0)
{
	fw2 = write(fd2, buffer, fr1);
	if (fw2 != fr1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
}
if (fr1 == -1)
{
	dprintf(2, "Error: Can't read from file %s\n", file1);
	exit(98);
}
fc1 = close(fd1);
if (fc1 == -1)
{
	dprintf(2, "Error: Can't close fd %d\n", fd1);
	exit(100);
}
fc2 = close(fd2);
if (fc2 == -1)
{
	dprintf(2, "Error: Can't close fd %d\n", fd2);
	exit(100);
}
}


/**
* main - preprocessing and cleaning
* @ac: argument counter
* @av: argument vector
*
* Return: suitable value
*/

int main(int ac, char **av)
{
if (ac != 3)
{
	dprintf(2, "Usage: %s file_from file_to\n", av[0]);
	exit(97);
}

cp(av[1], av[2]);

return (0);
}
