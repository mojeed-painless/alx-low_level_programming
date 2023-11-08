#include <stdio.h>
/**
 * main - main function
 * Description: prints the sum of the even-valued terms
 * Return: void
 */
int main(void)
{
	long c = 0;
	long n = 1;
	long a;
	long i;
	long sum = 0;

	for (i = 0; i < 50; i++)
	{
		a = c + n;
		c = n;
		n = a;
		if (a % 2 == 0 && a < 4000000)
		{
			sum += a;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
