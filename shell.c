#include "shell.h"
/**
 * main - main Entry into the program
 * @argc: total number of arguments
 * @argv: array of argument variable
 * @envp: environment variables
 * Return: Nothing
 */

int main(int argc, char **argv, char *envp[])
{
	char *PATH;
	char **commands = NULL;
	char **input = NULL;

	(void)argv, (void)envp;

	if (argc < 1)
		return (-1);
	while (1)
	{
		if (commands != NULL)
			free(commands);
		free_me(input);
		shell_prompt();
		input = read_line();
		commands = get_arguments(*input);

		if (commands == NULL || *commands == NULL || **commands == '\0')
		{
			free_me(commands);
			free_me(input);
			continue;	
		}
		if (check_builtins(commands) == 1)
		{
			continue;
		}	

		PATH = check_env_path(commands[0]);
		if (PATH != NULL)
		{
			execute_command(PATH, commands);
			if (PATH != NULL)
				free(PATH);
		}
		else
		{
			perror(argv[0]);
		}
	}

	return (0);
}





