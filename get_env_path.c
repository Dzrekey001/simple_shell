#include "shell.h"
/**
 * check_env_path - check if the command exit
 * @command: command name
 * Return: NULL on failure, else return path
 */

char *check_env_path(char *command)
{
	char *dir, *program_path;
	char *sys_path = getenv("PATH");
	char *sys_path_copy = strdup(sys_path);
	char *command_copy = strdup(command);
	int i = 0;

	if (sys_path_copy == NULL)
		return (NULL);
	if (sys_path == NULL)
		return (NULL);
	dir = strtok(sys_path_copy, ":");
	while (dir != NULL)
	{
		program_path = concatenate_format(dir, command_copy);
		if (access(program_path, F_OK | X_OK) == 0)
		{
			return (program_path);
		}
		free(program_path);
		dir = strtok(NULL, ":");
		i++;
	}
	return (NULL);
}
