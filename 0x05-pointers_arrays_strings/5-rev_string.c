#include <stdlib.h>

/**
 * rev_string - swap numbers
 *@s: char that pointing to the string to be reversed
 */

void rev_string(char *s)
{
int i, j, index, size;
j = 0;
while (s[index++])
size++;
char *newS = (char *)malloc(size *sizeof(char));
for (i = size - 1; i >= 0; i--)
{
newS[j] = s[i];
j++;
}

i = 0;
while (i <= size - 1)
{
s[i] = newS[i];
i++;
}
free(newS);
}
