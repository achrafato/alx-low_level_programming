#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: pointer to char
 * @text_content:  text to be written
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fc, fw;

	if (filename == NULL)
		return (-1);

	fc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fc == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fc);
		return (1);
	}
	fw = write(fc, text_content, strlen(text_content));
	if (fw == -1 || fw != (int)strlen(text_content))
		return (-1);

	close(fc);
	return (1);

}
