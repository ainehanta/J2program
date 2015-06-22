#include <stdio.h>
int main(void)
{
	int i;
	int result[17] = {1};
	int a;

	for(i=0;i<17;i++)
	{
		printf("%2d: %5d\n",i,result[i]);
		result[i+1] = result[i] * 2;
	}

	for(;;)
	{
		printf("input\t:"); scanf("%d",&a);

		if(a==-1)
			break;

		printf("output\t:%d\n",result[a]);
	}
}
