#include <stdio.h>
int n = 1;

void addODD()
{
	if(n <= 10)
	{
		printf("%d ", n+1);
		n++;
		subEVEN();
	}
	return;
}

void subEVEN()
{
	if (n <= 10)
	{
		printf("%d ", n - 1);
		n++;
		addODD();
	}
	return;
}

int main()
{
	addODD();
	return 0;
}