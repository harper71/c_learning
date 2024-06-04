#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[3][4] = {{2, 3, 5}, {1, 2, 3}, {5, 4, 4}};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		if (i != 0)
		{
			printf("\n");
		}
		for (j = 0; j < 4; j++)
		{
			
			if (j != 0)
			{
				printf(", ");
			}
			printf("%d", arr[i][j]);
		}
	}
	printf("\n");

}