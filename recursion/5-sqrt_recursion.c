#include "main.h"
/**
 * _sqrt_recursion - sqrt
 * @n: num
 * Return: result of num
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
	{
		n = n / 2;
		return (n);
	}
	return (-1);
}

