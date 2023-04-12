#include <stdlib.h>

/**
 * alloc_grid - concatenates two strings
 * @width: represent width of array
 * @height: represent height of array
 *
 * Return: null or allocated space.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **st;

if (width <= 0 || height <= 0)
{
return (NULL);
}

st = (int **)malloc(sizeof(int) * height);

if (st == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
st[i] = (int *)malloc(sizeof(int) * width);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
st[i][j] = 0;
}
}

return (st);

}
