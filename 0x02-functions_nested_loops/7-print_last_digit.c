#include"main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i: takes number input
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	int x;

	if (i < 0)
		x = -1 * (i % 10);
	else
		x = i % 10;

	_putchar(x + '0');
	return (x);
}
