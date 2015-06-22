#include <stdio.h>

int main(void)
{
	int x;
	int *pt;

	x = 5;
	pt = &x;
	
	printf("x\t= %d\n",x);
	printf("*x\t= %p\n",&x);

	printf("*pt\t= %d\n",*pt);

	*pt = 7;

	printf("x\t= %d\n",x);
	printf("*x\t= %p\n",&x);

	printf("*pt\t= %d\n",*pt);

	return 0;
}
