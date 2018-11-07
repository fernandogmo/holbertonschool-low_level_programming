#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * append_text_to_file - appends some content to a text file
  * @filename: const string name of the file open and write
  * @text_content: string to append to file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, w = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	if (len)
	{
		w = write(fd, text_content, len);
		if (w < len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
