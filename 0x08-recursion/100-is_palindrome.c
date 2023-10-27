#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: return 1 if it is and 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose lenght is to be calculated
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be check
 * @i: iterator
 * @l: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (check_pal(s, i + 1, l - 1));
}
