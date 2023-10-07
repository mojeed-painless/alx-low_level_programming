#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print numbers from 0-9 using putchar'
 *Return: always 0
 */
int main(void)
{
	int k = 48;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
