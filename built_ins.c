#include "shell.h"
/**
 * cd - function to change directory
 * @program_path: directory path
 * Return: 0 on success
 */

int cd(char  *program_path)
{
	if (program_path == NULL)
		program_path = "/";
	return (chdir(program_path));
}
/**
 * exit_shell - function to exit the shell
 * @status: exit status
 * Return: exit status
 */
int exit_shell(int status)
{
	exit(status);
}
