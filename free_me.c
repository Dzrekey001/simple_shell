#include "shell.h"
/**
 * free_me - free a 2d pointer memory address
 * @ptr: pointer to address
 * Return: Always Nothing
 */

void free_me(char **ptr)
{
	int i = 0;

	if (!ptr || ptr == NULL)
		return;
	while (ptr[i] != NULL)
	{
		if (ptr[i] != NULL)
		{
			free(ptr[i]);
		}
		i++;
	}
	free(ptr);
}
/**
 * free_all - function to do a general clean up
 * @command: cleanup for command allocation
 * @input: cleanup for input allocation
 * @input_a: cleanup for input_a allocation
 * Return: Always Nothing
 */

void free_all(char *command, char **input, char *input_a)
{
	free(command);
	free(input_a);
	free_me(input);
}
