#include "main.h"

/**
 *_strcat - concatenates two strings.
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
