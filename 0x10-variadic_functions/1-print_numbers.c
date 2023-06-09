#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - print numbers separated by separator
 * @separator: the string to be printed between numbers
 * @n: the length of passed parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
