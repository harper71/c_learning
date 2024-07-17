#include <stdio.h>

int main(void)
{
	int i;
	
	for (i = 3; i > 0; i--)
	{
		printf("%d", i);
		if (i > 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}