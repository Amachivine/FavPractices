#include <stdio.h>
/**
 * main - Comparing using Boolean operators
 * Return - Always 0
 */

int main ()
{
	int a = 43;
	int b = 54;
	int c;

	if(a == b){
		printf("%d is equal to %d\n", a, b);
	}else {
		printf("%d is not equal to %d\n", a, b);
	}

	if(a < b){
		printf("%d is less than %d\n", a, b);
	}else {
		printf("%d is not less than %d\n", a, b);
	}

	if(a > b){
		printf("%d is greater than %d\n", a, b);
	}else {
		printf("%d is not greater than %d\n", a, b);
	}

	a = 20;
	b = 12;

	if(a <= b){
		printf("%d is less than equal to %d\n", a, b);
	}else {
		printf("%d is not less equal to %d\n", a, b);
	}

	if(a >= b){
		printf("%d is greater than equal to %d\n",a, b);
	}else {
		printf("Got to goooooo\n");
	}
	return (0);
}
