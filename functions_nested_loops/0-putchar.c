#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char word[8]="_putchar";
	for(int i = 0 ; i < word ; i++ )
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
