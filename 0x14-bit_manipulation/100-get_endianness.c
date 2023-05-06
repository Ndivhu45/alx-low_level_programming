#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int num;
	char *c;

	num = 1;
	c = (char *) &num;

	return ((int)*c);

