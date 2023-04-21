#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints strings separated by separators
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, len;
	va_list ptr;
	char *s;

	while (format[i] != '\0')
		i++;
	len = i, i = 0;
	va_start(ptr, format);
	while (i < len && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char*);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
		}
		if ((format[i + 1] == 'c' || format[i + 1] == 'f' || format[i + 1] == 'i'
					|| format[i + 1] == 's') && i < (len - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
