#include "main.h"
/**
 * int _isalpha - check code
 * dis : 1 for letter 
 */
int _isalpha(int c)
{
	if (c <= 122 && c >=97)
		return (1);
	else if(c <= 90 && c >=65)
		return (1);
	else
		return (0);

}
