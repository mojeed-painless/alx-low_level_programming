#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print base 16 numbers in lowercase'
 *Return: always 0
 */
int main(void)
{
	int k;
	int j = 97;

	for (k = 48; k <= 97; k++)
	{
		putchar(k);
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
