#include "main.h"
/**
 * _memset -  memset char to mem
 * @s : poniter
 * @b : value
 * @n : number of reapet
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
