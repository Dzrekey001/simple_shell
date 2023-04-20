#include "shell.h"
/**
 * check_builtins - check if command is a builtin
 * @commands: array of commands args
 * Return: 1 on success, 0 if unsuccessful
 */

int check_builtins(char **commands)
{
	if (_strcmp(commands[0], "cd") == 0)
	{
		if (cd(commands[1]) < 0)
			perror(commands[1]);
		return (1);
	}
	if (_strcmp(commands[0], "setenv") == 0)
	{
		if (set_env(commands) == 1)
			return (1);
	}

	if (_strcmp(commands[0], "unsetenv") == 0)
	{
		if (unset_env(commands) == 1)
			return (1);
	}
	if (_strcmp(commands[0], "exit") == 0)
	{
		exit_shell(EXIT_SUCCESS);
	}
	if (access(commands[0], F_OK | X_OK) == 0)
	{
		execute_command(commands[0], commands);
		return (1);
	}

	return (0);
}
