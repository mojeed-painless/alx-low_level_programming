#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * Return - void
 */
void print_alphabet_x10(void)
{
	int i;
	char x = 'a';

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
