#include <stdio.h>

/**
 * main - This prints all data types using printf function
 * Return - This returns 0
 */

int main(void)
{
	int age = 54;
	char name1 = 'A';
	char name[] = "Favour";
	float gpa = 4.56;
	double tank = 3.453;

	printf("My name is %s and below are different data types\n", name);
	printf("I am number %d and I am an integer\n", age);
	printf("I am letter %c and I am a string\n", name1);
	printf("I am number %f and I am a float\n", gpa);
	printf("I am number %lf and I am a double integer\n", tank);
	return (0);
}
