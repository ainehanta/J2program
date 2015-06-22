#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_rand(int,int);

int main(void)
{
	int rnd[3][4];
	int x,y;

	for(y=0;y<3;y++)
	{
		for(x=0;x<4;x++)
		{
			rnd[y][x] = my_rand(50,80);
		}
	}

	for(y=0;y<3;y++)
	{
		for(x=0;x<4;x++)
		{
			printf("%3d",rnd[y][x]);
		}

		printf("\n");
	}

	return 0;
}

int my_rand(int n,int m)
{
	int ret;

	static int count=0;

	if(!count)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	ret = rand()%(m-n+1)+n;
	return ret;
}
