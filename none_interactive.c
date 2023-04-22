#include "shell.h"
/**
 * execute_file - function that execute shell commands in none interactive mode
 * @file_name: file name argument to the shell
 * Return: Always Nothing
 */

void execute_file(char *file_name)
{
	char *error;
	char *PATH = NULL;
	char  **commands = NULL;
	char line[MAX_LINE_LENGHT];
	FILE *file = fopen(file_name, "r");

	if (file == NULL)
	{
		error = "Could not open file";
		write(STDERR_FILENO, error, _strlen(error));
		exit(EXIT_FAILURE);
	}
	while (fgets(line, MAX_LINE_LENGHT, file) != NULL)
	{
		commands = get_arguments(line, " :\t\r\n");
		if (commands == NULL || *commands == NULL || **commands == '\0')
		{
			error = "Commands Not Found\n";
			write(STDERR_FILENO, error, _strlen(error));
			exit(EXIT_SUCCESS);
		}
		PATH = check_env_path(commands[0]);
		execute_command(PATH, commands);
		if (commands != NULL)
		{
			free(PATH);
			if (commands != NULL)
				free(commands);
		}
	}
	fclose(file);
}
