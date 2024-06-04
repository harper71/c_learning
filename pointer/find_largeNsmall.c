#include <stdio.h>

void minMAX(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int i;

	for (i = 1; i < len; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
		
	}
}
int main(void)
{
	int arr[] = {23, 45, 6, 98};
	int min, max;
	int len = sizeof(arr) / sizeof(arr[0]);

	minMAX(arr, len, &min, &max);

	printf("min element %d and max is %d\n", min, max);


}