#include <stdio.h>

/** main - writing a simple program that adds two numbers to show the simple structure of a function
 * Return - Always 0
 */

int add(int a, int b);

int main(void)
{
	int num1 = 5;
	int num2 = 6;
	int ret;
	ret = add(num1, num2);
	printf(" The total is : %d\n", ret);
	return (0);
}

int add(int a, int b){
	int result;
	result = a + b;
	return result;
}
