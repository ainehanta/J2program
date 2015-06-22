#include <stdio.h>

int calc(int,int,int*,int*);

int main(void)
{
	int a,b,plus,minus;
	int ret;

	printf("input > "); scanf("%d%d",&a,&b);

	ret = calc(a,b,&plus,&minus);

	printf("output> %d + %d = %d,%d - %d = %d,return = %d\n",a,b,plus,a,b,minus,ret);

	return 0;
}

int calc(int a,int b,int* plus,int* minus)
{
	*plus = a + b;
	*minus = a - b;

	if(*minus>0)
		return 1;
	else if(*minus<0)
		return -1;
	else
		return 0;
}
