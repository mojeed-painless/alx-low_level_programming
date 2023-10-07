#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphabets in lowercase but skip q and e'
 *Return: always 0
 */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		if (k == 101 || k == 113)
		{
			k++;
			continue;
		}
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
