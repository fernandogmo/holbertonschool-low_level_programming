#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

void exit_97(void);
void exit_98(void);
void exit_99(void);
void exit_100(void);


/**
  * main - copies the contents of one file to another
  * @ac: integer number of arguments
  * @av: pointer to string arguments
  * Return: 0 on success, or one of 97, 98, 99, 100 on failure
  */
int main(int ac, char **av)
{
	char buf[1024];
	int fd_dest = 0, fd_src = 0;
	ssize_t w = 0, r = 0;

	if (ac != 3)
		exit_97();

	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
		exit_98(av[1]);

	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
		exit_99(av[2]);

	r = read(fd_src, buf, 1024);
	do {
		if (r == -1)
			break;
		w = write(fd_dest, buf, r);
		if (w == -1)
			exit_99(av[2]);
		r = read(fd_src, buf, 1024);
	} while (r > 0);

	if (r == -1)
		exit_98(av[1]);

	w = close(fd_dest);
	if (w == -1)
		exit_100(fd_dest);

	r = close(fd_src);
	if (r == -1)
		exit_100(fd_src);

	return (0);
}


/**
  * exit_97 - exit status 97
  */
void exit_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
  * exit_98 - exit status 98
  * @str: name of file
  */
void exit_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
  * exit_99 - exit status 99
  * @str: name of file
  */
void exit_99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
  * exit_100 - exit status 100
  * @fd: name of file
  */
void exit_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
