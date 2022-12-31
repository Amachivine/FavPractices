#include <stdio.h>

/**
 * main - prints a particular text the user enters
 * Return - Always 0
 */

int main()
{
	char food[124];
	scanf("Yam, Egg, or Rice? = %s\n", &food);
	printf("You like %s\n", food);
	return (0);
}
