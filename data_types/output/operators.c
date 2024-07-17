#include <stdio.h>

int main(void)
{

	//arithmetic operators

	int a = 4, b = 57;

	int add = a + b;

	int sub = a - b;

	int mul = a * b;

	float div = b / a;

	int mod = b % a;

	printf("%d, %d, %d, %f, %d\n", add, sub, mul, div, mod);

	//increment and decrement
	a++; //preincrement
	b--;

	printf("%d, %d\n", a, b);
	++a;
	printf("%d, %d\n", a, b);

	int c = 5, d = 8;

	printf("%d\n", c+++d);

	//coditionnal operators

	char result;
	int marks;

	result = (marks > 33) ? 'p' : 'f';
	return 0;
}
