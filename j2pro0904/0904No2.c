#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int damage_sum(int,int,int,int,int);

int main(void)
{
	int pow,dam,diff,sp;
	int tech;

	printf("Input [力,威力,守備,素早さ,器用]:"); scanf("%d%d%d%d%d",&pow,&dam,&diff,&sp,&tech);

	printf("Output [ダメージ]          :%d\n",damage_sum(pow,dam,diff,sp,tech));

	return 0;
}

int damage_sum(int pow,int dam,int diff,int sp,int tech)
{
	static int count = 0;
	if(count==0)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	if(tech<=96)
	{
		tech = (tech-1)/8+1;
	}
	else
	{
		tech = 12;
	}

	int tmp = rand()%(16-tech);

	if(tmp==0)
	{
		diff = sp = 0;
		printf("クリティカル\n");
	}

	return (pow+dam)-(diff+sp/4);
}
