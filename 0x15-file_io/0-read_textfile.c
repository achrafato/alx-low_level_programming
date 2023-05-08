#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to char
 * @letters: number of letters to be read and print
 * Return:number of byte that were written to stdout.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fo, fr;
ssize_t fw;
char *buffer;

if (filename == NULL)
return (0);

fo = open(filename, O_RDONLY);

if (fo == -1)
{
return (-1);
}

buffer = malloc(letters);
if (buffer == NULL)
	return (0);
fr = read(fo, buffer, letters);

if (fr == -1)
{
free(buffer);
return (-1);
}

fw = write(STDOUT_FILENO, buffer, fr);
if (fw == -1 || fw != (ssize_t)fr)
{
free(buffer);
return (0);
}


free(buffer);
close(fo);
return (fw);
}
