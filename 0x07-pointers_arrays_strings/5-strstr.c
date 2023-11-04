#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *xhaystack;
	char *yneedle;

	while (*haystack != '\0')
	{
		xhaystack = haystack;
		yneedle = needle;

		while (*haystack != '\0' && *yneedle != '\0' && *haystack == *yneedle)
		{
			haystack++;
			yneedle++;
		}
		if (!*yneedle)
			return (xhaystack);
		haystack = xhaystack + 1;
	}
	return (0);
}
