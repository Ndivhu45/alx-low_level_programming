#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, binary_base;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary_base = 1; len >= 0; len--, binary_base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += binary_base;
		}
	}

	return (num);
}
