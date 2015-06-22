#include <stdio.h>

void printmes(void)
{
	int x,y;

	for(y=1;y<=3;y++)
	{
		for(x=1;x<=y;x++)
		{
			printf("*");
		}

		printf("\n");
	}
}

int main(void)
{
	int i;

	for(i=0;i<3;i++)
	{
		printmes();
	}

	return 0;
}
