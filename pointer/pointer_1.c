#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 5;

	int *ptr;
	
	ptr = &x;

	printf("%d \n", *ptr);

	*ptr = 4;

	printf("%d \n", *ptr);
}