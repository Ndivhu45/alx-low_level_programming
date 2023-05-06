#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_base = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		binary_base = 2 * binary_base + (b[i] - '0');
	}

	return (binary_base);
}

