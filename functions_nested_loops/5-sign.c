#include "main.h"
/**
 * print_sign - Check Holberton
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
	int i = 0;

	if (n > 0)
		_putchar('+');
		i = 1;
	else if (n < 0)
		_putchar('-');
		i = -1;
	else if (n == 0)
		_putchar('0');
		i = 0;
	return (i);
}
