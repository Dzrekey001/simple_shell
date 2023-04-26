#include "shell.h"

/**
 * _atoi - convers a string to an int
 * @s: a pointer to a string guven by main
 * Description: making our own atoi function
 * Return: returns 0 if no numbers and the result if numbers
 */

int _atoi(char *s)
{
	int counter = 0;
	int i = 0;
	unsigned int result = 0;
	int sign = 0;

	while (s[counter] != '\0')
	{
		if (s[counter] == '-')
			sign++;
		if (s[counter] >= 48 && s[counter] <= 57)
		{
			i++;
			result = result * 10 + s[counter] - '0';
		}
		if (i > 0 && (s[counter] < 48 || s[counter] > 57))
			break;
	counter++;
	}
	if (i == 0)
		return (0);
	if (sign % 2 == 0)
		return (result);
	return (result * -1);
}
/**
 * _strchr - locates a character in a string
 * @s: string to be parsed for character
 * @c: character to be located
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

/**
 * _strpbrk - searches for any of a set of bytes
 * @s: string to parsed for first occurrence of
 * of any of the byte in string accept.
 * @accept: accept string
 * Return: a pointer to the first occurrence of s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				return (&(s[j]));
			}
		}
	}
	return (0);

}

/**
 * _strstr - finds a substring within a string
 * @haystack: string to parse for substring
 * @needle: substring to search for
 * Return: pointer to the first occurrence in
 * string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, a;

	a = 0;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		a = j;

		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == haystack[a])
			{
				a++;
				continue;
			}
			else
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack + j);
		}
	}
	return (0);
}
