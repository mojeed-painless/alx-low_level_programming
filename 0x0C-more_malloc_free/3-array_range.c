#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int *y = NULL;
	int a, res = 0;

	if (min > max)
		return (NULL);
	res = max - min;
	y = malloc((res + 1) * sizeof(int));
	if (y == 0)
		return (NULL);
	for (a = 0; a <= res; a++)
	{
		y[a] = min + a;
	}
	return (y);
}
