#include <string.h>

/**
 * rev_string - swap numbers
 *@s: char that pointing to the string to be reversed
 */

void rev_string(char *s)
{
int i, j;
j = 0;
char newS[strlen(s)];
for (i = strlen(s) - 1; i >= 0; i--)
{
newS[j] = s[i];
j++;
}

i = 0;
while (i <= strlen(s) - 1)
{
s[i] = newS[i];
i++;
}
}
