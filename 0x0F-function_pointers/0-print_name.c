
/**
 * print_name - print a name
 * @name: pointer to char
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
