#include "main.h"
/**
 * _isdigit - function is check for digit
 * @c: value
 * Return: c
 */
int _isdigit(int c)
{
	int digit = '0';
	int isdigit = 0;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		if (c == digit)
		{
			isdigit = 1;
			break;
		}
		return (isdigit);
	}
