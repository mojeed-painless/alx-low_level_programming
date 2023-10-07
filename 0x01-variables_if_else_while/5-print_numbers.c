#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print numbers from 0-9'
 *Return: always 0
 */
int main(void)
{
	int k = 0;

	for (k = 0; k <= 9; k++)
	{
		printf("%d", k);
	}
	printf("\n");
	return (0);
}
