#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_all - prints strings separated by separators
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ptr;
	char *s;

	va_start(ptr, format);
	while (format && format[i])
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
					|| format[i + 1] == 's') && (size_t)i < (strlen(format) - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
