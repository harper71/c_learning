#include <stdio.h>

void fun(int n)
{
	if (n < 0)
	{
		return;
	}
	else
	{
		printf("%d", n);
		if (n != 0)
		{
			printf(", ");
		}
	}
	return (fun(n-1));
}

int main(int argc, char const *argv[])
{
	fun(3);
	printf("\n");
	return 0;
}
