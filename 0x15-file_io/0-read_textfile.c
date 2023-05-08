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
char *c = malloc(sizeof(char) * letters);

if (filename == NULL)
return (0);

fo = open(filename, O_RDONLY);

if (fo == -1)
{
free(c);
return (-1);
}

fr = read(fo, c, letters);

if (fr == -1)
{
free(c);
return (-1);
}

fw = write(STDOUT_FILENO, c, fr);

free(c);

return (fw);
}
