#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * Description - Print first 50 Fibonacci numbers
 * Return: void
 */
int main(void)
{
	long c, n, a, i;

	c = 0;
	n = 1;
	for (i = 0; i < 50; i++)
	{
		a = c + n;
		c = n;
		n = a;
		printf("%lu", a);
		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
