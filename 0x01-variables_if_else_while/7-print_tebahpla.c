#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print lowercase alphabets in reverse using putchar'
 *Return: always 0
 */
int main(void)
{
	int k = 122;

	while (k > 96)
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
