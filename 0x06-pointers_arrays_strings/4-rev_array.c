/**
* reverse_array - reverses the content of an array of integers.
*@a: pointer to integer
*@n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
int i, crat;
for (i = 0; i < n / 2 ; i++)
{
crat = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = crat;
}
}
