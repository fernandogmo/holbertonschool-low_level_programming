#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * create_file - reads a text file and prints it to stdout
  * @filename: const string name of the file to create
  * @text_content: string to add to file 
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, w = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | 0_CREAT | 0_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	w = write(fd, text_content, len);
	if (w < len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
