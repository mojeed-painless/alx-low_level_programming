#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int x, y, z, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		s = av[x];
		y = 0;

		while (s[y++])
			l++;
		l++;
	}

	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < l; x++)
	{
		s = av[x];
		z = 0;

		while (s[z])
		{
			str[y] = s[z];
			z++;
			y++;
		}
		str[y++] = '\n';
	}
	str[y] = '\0';

	return (str);
}
