#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string to be measured
 *
 * Return: amount of chars in string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s; s++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * s1, followed by the first n bytes of s
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: amount of bytes in s2
 *
 * Return: pointer to the concatenated string, or NULL pointer if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int sign_n = n;
	int i;
	char *cnct;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else if (sign_n > _strlen(s2))
		len2 = _strlen(s2);
	else
		len2 = n;

	cnct = malloc(sizeof(char) * ((len1 + len2) + 1));

	if (cnct == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		cnct[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		cnct[len1 + i] = s2[i];
	}

	cnct[len1 + len2] = '\0';

	return (cnct);
}
