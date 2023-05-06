#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *) &num;

	return ((int)*c);

