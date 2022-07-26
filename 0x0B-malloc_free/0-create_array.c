#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array, and initialiazes it with a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails
 */

char *create_array(unsigned int size, char c)
{
	char *pArray;
	unsigned int count;

	pArray = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		pArray[count] = c;
	}

	return (pArray);
}
