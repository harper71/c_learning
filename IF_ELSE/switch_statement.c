#include <stdio.h>

int main()\
{
	int x = 1;

	switch (x)
	{
	case 1:
		printf("x is %d more\n", x);
		break;
	case 2:
		printf("x is %d\n", x);
		break;
	default:
		break;
	}
}