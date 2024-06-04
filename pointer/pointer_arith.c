#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p;
	p = &arr[0];

	printf("%d\n", *p);

	p = p + 3;

	printf("%d\n", *p);

	printf("%d\n", *(p++));
	printf("%d\n", *p);

	printf("%d\n", *(++p));

	printf("%d\n", *(p--));
	printf("%d\n", *(--p));

	return 0;
}
