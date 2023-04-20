#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings separated by separators
 * @separator: the string to be printed between numbers
 * @n: the length of passed parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ptr);
}
