#include "shell.h"
/**
 * execute_command - create a fork procces to execute the program
 * @program_path: path to the program
 * @program_arg: array of argument to be passed to the program.
 * Is should be NULL terminated
 * Return: Always Nothing
 */

void execute_command(char *program_path, char **program_arg)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();

	if (child_pid < 0)
	{
		perror(program_path);
	}
	if (child_pid == 0)
	{
		execve(program_path, program_arg, env);
		perror(program_path);
		free_me(program_arg);
		free(program_path);
		exit(98);
	}
	else
	{
		wait(&status);
	}
}
