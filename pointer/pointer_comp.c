#include <stdio.h>
// the pointer must be pointing to the a same location
int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	int *p = &arr[3];
	int *q = &arr[5];

	printf("%d\n", p<=q);
	printf("%d\n", p==q);
	printf("%d\n", p >= q);
	return 0;
}
