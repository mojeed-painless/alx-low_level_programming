include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print alphabets lowercase'
  *Return: always 0
  */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
