#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int *x;
	int *y;

	a = 7;
	x = &a;
	printf("a=%d\n",a);
	printf("*x=%d\n",*x);

	a = 5;
	y = x;
	*x = 8;
	printf("a=%d")
}
