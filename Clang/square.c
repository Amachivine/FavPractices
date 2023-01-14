#include <stdio.h>

/**
 * main - prints out the square of any number using the function
 * Return - 0
 */

double square(double num)
{
	return (num * num);
}

int main()
{
	int num;
	double n;

	printf("Hi there cuties\n");

	printf("Input any number for square: ");
	scanf("%d", &num);
	n = square(num);
	printf("The square of %d is : %.2f\n", num, n);
	return 0;
}
