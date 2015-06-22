#include <stdio.h>
#include <stdlib.h>

int my_rand(int,int);

int count = 0;

int main(void)
{
	int i,x;
	int val;
	int count[10] = {0};

	for(i=0;i<1000;i++)
	{
		val = my_rand(0,99);

		count[val/10]++;
	}

	for(i=0;i<10;i++)
	{
		printf("%2d~%2d¤Î¸Ä¿ô : ",i*10,i*10+9);

		for(x=0;x<=count[i]/10;x++)
		{
			printf("=");
		}

		printf(">%d\n",count[i]);
	}

	return 0;
}

int my_rand(int n,int m)
{
	int ret;

	if(!count)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	ret = rand()%(m-n+1)+n;

	return ret;
}
