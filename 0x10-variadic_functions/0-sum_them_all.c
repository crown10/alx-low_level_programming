#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * Return: sum of all all number
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list a;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);

}
