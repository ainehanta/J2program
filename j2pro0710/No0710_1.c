#include <stdio.h>
#include <math.h>

int main(void)
{
	double result;
	double max;
	int i;

	printf("µ÷Î¥ > "); scanf("%lf",&max);

	for(result=0.000001,i=0;result<=max;i++)
	{
		result *= 2;
	}

	printf("%d²ó\n",i);

	return 0;
}
