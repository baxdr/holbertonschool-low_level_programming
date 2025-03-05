#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: i
 */
int _strlen_recursion(char *s)
{
	unsigned int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(*s[i]);
	}
	return (i);
}
