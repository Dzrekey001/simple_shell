#include "shell.h"
/**
 * special_case_semi - function to handle the ";" command
 * @str: string to be parsed.
 * Return: 1 on success, 0 on failure
 */

int special_case_semi(char *str)
{
	char **commands, *path;
	char **semi_separated = get_arguments(str, ";");
	int i = 0;

	if (semi_separated == NULL || *semi_separated == NULL)
	{
		free_me(semi_separated);
		return (1);
	}
	while (semi_separated[i] != NULL)
	{
		commands = get_arguments(semi_separated[i], " :\t\r\n");
		if (check_builtins(commands) == 1)
		{
			i++;
			continue;
		}
		path = check_env_path(commands[0]);
		if (path != NULL)
			execute_command(path, commands);
		else
			perror(commands[0]);
		i++;
	}
	return (0);
}
