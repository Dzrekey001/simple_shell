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
	char **commands, **input;
	char *PATH;
	char *str_copy;

	commands = NULL;
	input = NULL;
	(void)argv, (void)envp;

	if (argc < 1)
		return (-1);
	while (1)
	{
		shell_prompt();
		input = read_line();
		commands = get_arguments(*input);
		str_copy = strdup(commands[0]);
		if (commands == NULL || *commands == NULL || **commands == '\0')
			continue;
		PATH = check_env_path(str_copy);
		if (PATH != NULL)
		{
			execute_command(PATH, commands);
		}
		else
		{
			perror(argv[0]);
		}
	}
	free_me(input);
	free_me(commands);
	free(str_copy);
	return (0);
}





