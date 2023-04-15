#include "shell.h"
/**
 * get_arguments - split the str to various path to be
 * passed to the the program
 * @str: command string from the user
 * Return: Null if fails, or array of arguments when
 * successful
 */

char **get_arguments(char *str)
{
	char **arguments, *argument, *parse;
	char *delimiter = " :\t\r\n";
	long int index = 0;
	int arg_len = 0;
	char *str_copy = strdup(str);

	parse = strtok(str_copy, delimiter);
	while (parse != NULL)
	{
		arg_len++;
		parse = strtok(NULL, delimiter);
	}
	arguments = malloc(sizeof(char *) * (arg_len + 1));
	if (arguments == NULL)
	{
		free(str_copy);
		return (NULL);
	}
	argument = strtok(str, delimiter);
	while (argument != NULL)
	{
		arguments[index] = argument;
		argument = strtok(NULL, delimiter);
		index++;
	}
	arguments[index] = NULL;
	free(str_copy);
	return (arguments);
}
