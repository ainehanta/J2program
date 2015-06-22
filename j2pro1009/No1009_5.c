#include <stdio.h>

int what_day(int,int*,int*);

const int day_array[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(void)
{
	int add,month,day;
	month = day = 0;

	printf("input > "); scanf("%d",&add);

	if(what_day(add,&month,&day))
	{
		printf("\tError\n");
		return 1;
	}

	printf("output> %d·î%dÆü\n",month,day);

	return 0;
}

int what_day(int x,int* month,int* day)
{
	int i;
	int tmp;

	if(!(x>=1&&x<=365))
		return 1;

	x--;

	tmp = 0;
	for(i=0;i<12;i++)
	{
		tmp += day_array[i];
		if(x-tmp<0)
		{
			*month = i+1;
			*day = x - (tmp - day_array[i]) + 1;
			break;
		}
	}
	return 0;
}
