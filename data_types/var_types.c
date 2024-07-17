#include <stdio.h>

int num1 = 45;

int main(void)
{
	register int num_fast = 47;
	printf("%d, %d\n", num1, num_fast);

	return (0);
}