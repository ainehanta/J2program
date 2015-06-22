#include <stdio.h>

void hikaku(int a,int b)
{
	if(a<b)
	{
		printf("%d\n",b);
	}
	else
	{
		printf("%d\n",a);
	}
}

int main(void)
{
	int a,b;

	printf("input = "); scanf("%d%d",&a,&b);

	printf("%dと%dで大きい方 : ",a,b);

	hikaku(a,b);

	return 0;
}
