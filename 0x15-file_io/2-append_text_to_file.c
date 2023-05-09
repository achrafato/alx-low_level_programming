#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to file.
 * @filename: pointer to char
 * @text_content:  text to be written
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fa, i = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_APPEND | O_RDWR);

	if (fo == -1)
	{
		close(fo);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fo);
		return (1);
	}
	else
	{
		while (text_content[i] != '\0')
			i++;
	}

	fa  = write(fo, text_content, i);

	if (fa == -1 || fa != i)
	{
		close(fo);
		return (-1);
	}

	close(fo);
	return (1);

}
