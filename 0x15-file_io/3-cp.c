#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * main - copy the content of a file to another file
 * @ac: ac
 * @av: av
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int fo1, fo2, fr, fw;
char *buffer;
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fo2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fo2 == -1)
	{
		close(fo2);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	fo1 = open(av[1], O_RDWR);
	if (fo1 == -1)
	{
		close(fo1);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	fr = read(fo1, buffer, 1024);
	if (fr == -1)
		exit(99);
	fw = write(fo2, buffer, 1024);
	if (fw == -1 || fw != 1024)
	{
		close(fo1);
		close(fo2);
		exit(99);
	}
	if (close(fo2) == -1 || close(fo1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fo2);
		exit(100);
	}
	return (0);
}
