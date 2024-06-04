#include <stdio.h>

int main()
{
	int i = 10;
	int *p, *q;
	p = &i;
	q = p;

	printf("%d %d\n", *p, *q);

	int j = 20;

	q = &j;

	*q = *p;

	printf("%d %d\n", *p, *q);

}