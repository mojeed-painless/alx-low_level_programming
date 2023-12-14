#include "main.h"

/**
 * binary_to_uint - converts a binary number 
 * to an unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int , b_t;

	if (!b)
		return (0);

	u = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, b_t = 1; l >= 0; l--, b_t *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			u += b_t;
		}
	}

	return (u);
}
