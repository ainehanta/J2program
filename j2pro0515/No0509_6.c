#include <stdio.h>

int kaijo(int a,int n)
{
	int ret,i;

	ret = a;
	for(i=1;i<n;i++)
	{
		ret *= a;
	}

	return ret;
}

int main(void)
{
	int a,n;

	printf("input = "); scanf("%d%d",&a,&n);

	printf("%d¤Î%d¾è : %d\n",a,n,kaijo(a,n));

	return 0;
}
