#include <stdio.h>

void print_num(int n);

int main(void)
{
	int n;

	for(;;)
	{
		printf("input = "); scanf("%d",&n);

		if(n<0)
			break;

		print_num(n);
	}

	return 0;
}

void print_num(int n)
{
	int x,y;

	for(y=0;y<n;y++)
	{
		for(x=0;x<n;x++)
		{
			printf("%2d",x);
		}

		printf("\n");
	}
}
