#include "shell.h"
/**
 * execute_command - create a new process to execute a new program
 * @program_path: path to the program to be executed
 * @program_arg: arguments to be passed to the program
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
		free_me(program_arg);
		free(program_path);
		perror(program_path);
		exit(98);
	}
	else
	{
		wait(&status);
	}
}
