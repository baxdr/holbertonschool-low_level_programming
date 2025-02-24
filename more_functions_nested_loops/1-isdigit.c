#include "main.h"
/**
 * _isdigit - function is check for digit
 * @c: value
 * Return: c
 */
int _isdigit(int c)
{
	char digit = '0';
	int isdigit = 0;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		if (digit == c)
		{
			isdigit = 1;
			break;
		}
	}
		return (isdigit);
}
