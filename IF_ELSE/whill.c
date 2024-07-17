#include <stdio.h>

int main(void)
{
	int i = 3;

	while (i > 0)
	{

		printf("%d", i);

		if (i > 1)
		{
			printf(", ");
		}

		i--;
	}

	printf("\n");
	return (0);	
}