#include <stdio.h>

#define NUM 5

double heikin(double*);

int main(void)
{
	double number[NUM] = {0};
	int i;

	for(i=0;i<NUM;i++)
	{
		printf("input = "); scanf("%lf",&number[i]);
	}

	printf("Ê¿¶Ñ : %f\n",heikin(number));

	return 0;
}

double heikin(double number[])
{
	double ret = 0;
	int i;

	for(i=0;i<NUM;i++)
	{
		ret += number[i];
	}

	return ret/NUM;
}
