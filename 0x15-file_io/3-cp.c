#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * check_status - check file status
 * @fo1: file descriptor related to fo1
 * @fo2: file descriptor related to fo2
 * @av: pointer to an array of strings
 */

void check_status(int fo1, int fo2, char *av[])
{
	if (fo1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (fo2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copy the content of a file to another file
 * @ac: ac
 * @av: av
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
int fo1, fo2, fr, fw;
char buffer[1024];
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fo2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fo1 = open(av[1], O_RDONLY);
	check_status(fo1, fo2, av);
	fr = read(fo1, buffer, 1024);
	if (fr == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fw = write(fo2, buffer, 1024);
	if (fw == -1 || fw != fr)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fo2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fo2);
		exit(100);
	}
	if (close(fo1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fo1);
		exit(100);
	}
	return (0);
}
