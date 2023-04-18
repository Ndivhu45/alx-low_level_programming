#include <stdio.h>

/** 
 * main - prints the name of header file
 *
 *return: 0 always
 */
int main(void)
{
	printf("This program was compiled from the file: %s\n", __FILE__);
    return 0;
}
