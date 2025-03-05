#include "main.h"
/**
 * _puts_recursion - print like put
 * @s: string
 * Return: print string
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_putchar("%c", s);
	return (_puts_recursion(s + 1));
}
