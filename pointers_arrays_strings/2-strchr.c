#include "main.h"
/**
 * _strchr - function
 * @s: string
 * @c: char
 * Return: s & c & null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
