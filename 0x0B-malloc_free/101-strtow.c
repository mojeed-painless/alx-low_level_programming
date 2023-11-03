#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: returns a pointer to an array of strings,
 * or NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	int i, f, l;
	char **wrds;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = f = l = 0;
	while (str[i])
	{
		if (f == 0 && str[i] != ' ')
			f = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			f = 0;
			l++;
		}
		i++;
	}

	l += f == 1 ? 1 : 0;
	if (l == 0)
		return (NULL);

	wrds = (char **)malloc(sizeof(char *) * (l + 1));
	if (wrds == NULL)
		return (NULL);

	util(wrds, str);
	wrds[l] = NULL;
	return (wrds);
}

/**
 * util - a util function for fetching words into an array
 * @wrds: the strings array
 * @str: the string
 */
void util(char **wrds, char *str)
{
	int i, j, start, f;

	i = j = f = 0;
	while (str[i])
	{
		if (f == 0 && str[i] != ' ')
		{
			start = i;
			f = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(wrds, str, start, i, j);
			j++;
			f = 0;
		}

		i++;
	}

	if (f == 1)
		create_word(wrds, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @wrds: array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **wrds, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	wrds[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		wrds[index][j] = str[start];
	wrds[index][j] = '\0';
}
