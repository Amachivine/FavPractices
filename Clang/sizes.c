#include <stdio.h>

/**
 * This prints out sizes of some data types
 * Returns- Always 0
 */

int main(void)
{
	int i;
	char c;
	double d;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu. \n", (unsigned long)sizeof(c));

	return(0);
}
