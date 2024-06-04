#include <stdio.h>

int main(void)
{
	int var;
	var = 21;
	size_t val = 0;

	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 20};

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n%d\n", a[]);
	printf("%d\n", var);
}