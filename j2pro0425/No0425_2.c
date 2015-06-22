#include <stdio.h>
int main(void)
{
	int n,x,y;

	for(;;)
	{
		printf("input\t:"); scanf("%d",&n);

		if(n<0)
			break;

		for(y=1;y<=n;y++)
		{
			for(x=1;x<=n-y;x++)
			{
				printf(" ");
			}

			printf("*");
			printf("\n");
		}
	}

	return 0;
}
