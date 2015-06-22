#include <stdio.h>
#include <stdlib.h>

int my_rand(int,int);

int count = 0;

int main(void)
{
	int i;
	int n,m;
	int val;


	printf("乱数の範囲を入力してください:"); scanf("%d%d",&n,&m);

	for(i=0;i<20;i++)
	{
		printf("%d\n",my_rand(n,m));
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
