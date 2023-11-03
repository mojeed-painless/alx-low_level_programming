#include "main.h"
#include <stdlib.h>

/**
 * _strdup -function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the source string
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	copy = (char *)malloc((sizeof(char) * l) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		copy[i] = str[i];
	copy[l] = '\0';

	return (copy);
}
