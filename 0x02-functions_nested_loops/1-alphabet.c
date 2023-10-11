#include "main.h"

/**
 * main - function that prints lowercase alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
    _putchar('\n');
    return (0);
}
