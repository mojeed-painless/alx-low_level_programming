#include "main.h"

/**
* _strcmp - compares two strings.
* @s1: first string
* @s2:second string
* Return: returns zero if s1 == s2
* or returns negative number if s1 < s2
* or returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			d = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			d = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (d);
}
