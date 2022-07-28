#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/*
 * malloc_checked - allocate memory using malloc.
 * @b : memory size to be allocated.
 *
 * Return: a pointer to allocate memory.
 */

void *malloc_checked(unsigned int b);
{
	void *c = malloc b;

	if (*c == Null)
		exit(98);

	return (c);
}
