#include <stdio.h>

#define NUM 5

double heikin(double*,int);

int main(void)
{
	double number[NUM] = {0};
	int i;

	for(i=0;i<NUM;i++)
	{
		printf("input = "); scanf("%lf",&number[i]);
	}

	printf("Ê¿¶Ñ : %f\n",heikin(number,NUM));

	return 0;
}

double heikin(double number[],int x)
{
	double ret = 0;
	int i;

	for(i=0;i<x;i++)
	{
		ret += number[i];
	}

	return ret/x;
}
