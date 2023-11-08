#include "main.h"
/**
 * _islower - checks lowercase character.
 * @c: int c
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
