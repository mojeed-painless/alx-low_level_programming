#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount.
 *
 * Return: If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}

