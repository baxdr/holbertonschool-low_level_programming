#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - func create array
 * @size: size of array
 * @c: value
 * Return: null if 0 or fails or array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
