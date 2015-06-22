#include <stdio.h>

void func(int*,int*);

int main(void)
{
	int a,b;

	func(&a,&b);

	printf("a = %d\n",a);
	printf("b = %d\n",b);
}

void func(int* a,int* b)
{
	*a = 34;
	*b = 56;
}
