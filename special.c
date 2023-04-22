#include "shell.h"
/**
 * check_special - function to handle special cases
 * @input: input to be parsed for special characters before
 * execution.
 * Return: 1 on success, 0 on failure
 */

int check_special(char *input)
{
	if (strchr(input, ';') != NULL)
	{
		special_case_semi(input);
		return (1);
	}
	return (0);
}
