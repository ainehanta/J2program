#include <stdio.h>

void  array_copy(int*,int*,int);

int main(void)
{
	int a[10];
	int b[10];
	int i;

	for(i=0;i<10;i++)
		b[i] = i;

	for(i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		printf("b[%d] = %d\n",i,b[i]);
	}

	printf("Copy\n");
	array_copy(a,b,10);

	for(i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		printf("b[%d] = %d\n",i,b[i]);
	}

	return 0;
}

void array_copy(int* a,int* b,int num)
{
	int i;

	for(i=0;i<num;i++)
		*(a+i) = *(b+i);
}
