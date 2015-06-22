#include <stdio.h>

int hikaku(int a,int b,int c)
{
	int small;

	if(a<b)
	{
		small = a;
	}
	else if(b<c)
	{
		small = b;
	}
	else
	{
		small = c;
	}

	return small;
}

int main(void)
{
	int a,b,c;

	printf("input = "); scanf("%d%d%d",&a,&b,&c);

	printf("最小の値 : %d\n",hikaku(a,b,c));

	return 0;
}
