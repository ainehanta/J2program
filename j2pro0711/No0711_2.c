#include <stdio.h>
#include <math.h>

void oval_disp(double);
double oval_ret(double);

int main(void)
{
	double r;

	printf("х╬╥б:"); scanf("%lf",&r);

	oval_disp(r);

	printf("ллюя(main):%f\n",oval_ret(r));

	return 0;
}

void oval_disp(double r)
{
	double result;

	result = pow(r,2) * M_PI;

	printf("ллюя(oval):%f\n",result);
}

double oval_ret(double r)
{
	double result;

	result = pow(r,2) * M_PI;

	return result;
}
