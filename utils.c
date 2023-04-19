#include "shell.h"


/**
 * _strdup - return a pointer to newly allocated
 * space in memory
 * @str: string to be compied to the new allocation
 * Return: a pointer to new string ir Null if string is Null
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int str_len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	t = malloc(sizeof(char) * (str_len + 1));

	if (t == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (str[i] != '\0')
		{
			t[i] = str[i];
			i++;
		}
		t[i] = '\0';
		return (t);
	}
}

/**
 * _strlen - check lenght of string
 * @s: pointer to the address of the string
 * Description: a fucntion that returns the
 * of a string.
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int _len;

	_len = 0;

	while (*s != '\0')
	{
		_len += 1;
		s++;
	}
	return (_len);
}
/**
* _strcmp - compares two strings
* @s1: compared to s2;
* @s2: compared to s1;
*
* Return: returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	result = (*(s1 + i) - *(s2 + i));

	return (result);
}
/**
 * _getline - get the string from the file stream
 *  @lineptr: a pointer to an allocated memory
 *  @n: total byte to be fetched from the stream
 *  @stream: the file stream to fetch strings
 *  Return: -1 on fialure, else return total lenght of string fetched
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char *buffer = NULL;
	ssize_t len = 0;
	ssize_t size = 0;
	int c;

	if (!lineptr || !n || !stream)
	{
		return (-1);
	}
	*lineptr = NULL;
	while ((c = fgetc(stream)) != EOF)
	{
		if (len + 1 >= size)
		{
			size = size ? size * 2 : MAX_LINE_LENGHT;
			buffer = realloc(buffer, size * sizeof(char));
			if (!buffer)
			{
				return (-1);
			}
			*lineptr = buffer;
			*n = size;
		}
		buffer[len++] = c;
		if (c == '\n')
		break;
	}
	if (len == 0)
		return (-1);

	buffer[len] = '\0';
	return (len);
}

