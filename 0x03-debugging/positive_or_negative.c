#include "main.h"
/**
  * positive_or_negative - checks for positive or negative numbers
  *
  * @1: the number to be checked
  *
  * return: always 0
  */

void positive_or_negative(int i)
{ 
	if (i < 0)
		prinft("%d is negative", i);
	else
		printf("%d is positive", i);
}
