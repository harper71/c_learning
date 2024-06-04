#include <stdio.h>
// warning dont try to return a local variable 
int *findMID(int arr[], int len)
{
	return (&arr[len/2]);
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);

	int *mid = findMID(a, n);
	printf("%d\n", *mid);

	printf("%p\n", mid);

}