#include "shell.h"
/**
 * check_continue - check for special cases
 * @str: string to be parsed
 * @commands: commands to be executed if special cases are met
 * Return: 1 on success, 0 on failure
 */

int check_continue(char *str, char **commands)
{
	if (check_special(str) == 1 || check_builtins(commands) == 1
			|| check_alias(str) == 1)
	{
		free(commands);
		free(str);
		return (1);
	}
	return (0);
}
/**
 * free_all - function to free some memory
 * @path: path address to be fread
 * @str: str address to be fread
 * @commands: commands address to be fread
 * Return: Always Nothing
 */

void free_all(char *path, char *str, char **commands)
{
	free(path);
	free(str);
	free(commands);
}
/**
 * check_null - check if a command is null
 * @commands: command arrays to be checked
 * @error: error message
 * Return: Always Nothing
 */
void check_null(char **commands, char *error)
{
	if (commands == NULL || *commands == NULL || **commands == '\0')
	{
		write(STDERR_FILENO, error, _strlen(error));
		exit(EXIT_SUCCESS);
	}
}
/**
 * free_all_main - free addresses
 * @commands: commands address to be fread
 * @input_alias: input_alias address to be fread
 * @input: input address to be fread
 * Return: Always Nothing
 */

void free_all_main(char **commands, char *input_alias, char **input)
{
	free(commands);
	free(input_alias);
	free_me(input);
}
