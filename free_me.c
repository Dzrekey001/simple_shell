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
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}
