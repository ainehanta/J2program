#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 500

void sum(int*);
int big_small(int*,int);
double heikin(int*);

int main(void)
{
	int data[MAX];
	int i;

	srand((unsigned)time(NULL));

	for(i=0;i<MAX;i++)
	{
		data[i] = rand()%100000;
	}

	sum(data);

	printf("最小値:%d\n",big_small(data,0));
	printf("最大値:%d\n",big_small(data,1));

	printf("平均値:%lf\n",heikin(data));

	return 0;
}

void sum(int data[])
{
	int result,i;

	for(result=0,i=0;i<MAX;i++)
	{
		result += data[i];
	}

	printf("合計値:%d\n",result);
}

int big_small(int data[],int mode)
{
	int result,i;

	switch(mode)
	{
		case 0 : result = data[0];
				 for(i=1;i<MAX;i++)
				 {
					 if(result>data[i])
					 {
						 result = data[i];
					 }
				 }
				 break;
		case 1 : result = data[0];
				 for(i=1;i<MAX;i++)
				 {
					 if(result<data[i])
					 {
						 result = data[i];
					 }
				 }
				 break;
	}

	return result;
}

double heikin(int data[])
{
	double result;
	int i;

	for(result=0,i=0;i<MAX;i++)
	{
		result += data[i];
	}

	return result/MAX;
}
