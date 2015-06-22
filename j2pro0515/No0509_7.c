#include <stdio.h>

int wa(int n,int m)
{
	int ret,i;

	ret = n;
	for(i=n+1;i<=m;i++)
	{
		ret += i;
	}

	return ret;
}

int main(void)
{
	int n,m;

	printf("input = "); scanf("%d%d",&n,&m);

	printf("%dから%dまでの和 : %d\n",n,m,wa(n,m));

	return 0;
}
