#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[] = {1, 2, 3, 21, 34, 45, 12, 66, 87};

	int i;

	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%d", size);
	printf("\n");
	for (i = size - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);

		if (i != 0)
		{
			printf(", ");
		}

	}
	printf("\n");
	
	

}