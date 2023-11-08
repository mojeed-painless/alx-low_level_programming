#include <stdio.h>
/**
 * main - main function
 * Description: Print 98 first fibo nums
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long c, n, a;
	unsigned long x, y, z, a2;

	i = 0;
	c = 0;
	n = 1;
	for (i = 1; i <= 91; i++)
	{
		a = c + n;
		c = n;
		n = a;
		printf("%lu, ", a);
	}
	x = c % 1000;
	c = c / 1000;
	y = n % 1000;
	n = n / 1000;
	while (i <= 98)
	{
		a2 = (x + y) / 1000;
		z = (x + y) - a2 * 1000;
		a = (c + n) + a2;
		x = y;
		y = z;
		c = n;
		n = a;
		if (z >= 100)
			printf("%lu%lu", a, z);
		else
			printf("%lu0%lu", a, z);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
