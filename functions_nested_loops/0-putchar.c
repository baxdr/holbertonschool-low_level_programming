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
int i;
char word[8] = "_putchar";
for (i = 0 ; i < 8 ; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
