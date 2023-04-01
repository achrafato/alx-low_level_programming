#include <string.h>
/**
 * infinite_add - add two numbers
 *@n1: pointer to integer
 *@n2: pointer to integer
 *@r: pointer to char
 *@size_r: buffer size
 * Return: address of char.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, sum = 0, crat = 0;
int nSize = strlen(n1);
int mSize = strlen(n2);
int size = size_r;
int bigger = nSize > mSize ? nSize : mSize;
char emp[size_r + 1];

for (i = 0; i < size_r ; i++)
{
sum = crat;
if (i < strlen(n2))
{
sum += (n2[mSize - 1] - '0');
mSize--;
}

if (i < strlen(n1))
{
sum += (n1[nSize - 1] - '0');
nSize--;
}

r[size - 1] = sum % 10 + '0';
size--;
crat = sum / 10;
}

while (*r == '0' && *(r + 1) != '\0')
{
r++;
}
if (crat != 0)
{
emp[0] = crat + '0';
strcpy(emp + 1, r);
strcpy(r, emp);
}
return (r);
}
