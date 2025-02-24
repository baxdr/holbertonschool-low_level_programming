#include "main.h"
/*
 * int _isupper - check uppercase
 * @c : value
 * Return : c
 */
int _isupper(int c)
{
	char uppercase ='A';
	int isupper = 0;

	for (uppercase = 'A' ; uppercase <= 'Z' ; uppercase++)
	{
		if ( c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
