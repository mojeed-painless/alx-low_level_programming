#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Printing alphabets in lowercase and uppercase'
 *Return: always 0
 */
int main(void)
{
	int k = 97;
	int j = 65;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
