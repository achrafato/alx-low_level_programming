#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints strings separated by separators
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, len, separator = 1;
	va_list ptr;
	char *s;

	while (format[i] != '\0')
		i++;
	len = i, i = 0;
	va_start(ptr, format);
	while (i < len && format != NULL)
	{
		separator = 1;
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
			default:
			separator = 0;
			break;
		}
		if (i < (len - 1) && separator == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
