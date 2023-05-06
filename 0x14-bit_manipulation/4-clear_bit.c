#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

