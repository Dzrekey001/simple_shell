#include "shell.h"
/**
 * read_line - read input from the stdin
 * Return: Null if an error occour else return
 */

char **read_line()
{
	char **buffer;
	size_t str;
	size_t MAX_LENGHT = MAX_LINE_LENGHT;

	buffer = calloc(MAX_LENGHT, sizeof(char *));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	str = getline(buffer, &MAX_LENGHT, stdin);
	if (str <= 0)
	{
		return (NULL);
	}
	while (str > MAX_LENGHT - 1)
	{
		MAX_LENGHT *= 2;
		buffer = realloc(buffer, MAX_LENGHT);
		if (buffer == NULL)
			return (NULL);
		str = getline(buffer, &MAX_LENGHT, stdin);
		if (str == (size_t) -1)
		{
			free(buffer);
			return (NULL);
		}
	}
	return (buffer);
}
