#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to stdout
  * @filename: const char * name of the file to read
  * @letters: size_t number of chars to read
  * Return: ssize_t number of chars the function read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, r = 0, w = 0;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w < r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
