#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
	/*base case*/
	if (num == 1)
	{
		return 1;
	}
	else
	{
		/*recursive procedures*/
		printf("%d ", num);
		return num * fact(num - 1);

	}
}
int main(void)
{
	int n = 5;

	int value =  fact(n);

	printf("%d\n", value);
	
	return 0;
}
