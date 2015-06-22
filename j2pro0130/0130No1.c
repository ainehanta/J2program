#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_data(double*);
double calc_sum(double*);

void print_data(double*);

int main(void)
{
	double d[10];
	double sum;

	init_data(d);
	print_data(d);

	sum = calc_sum(d);

	printf("sum : %2.1f\n",sum);

	return 0;
}

void print_data(double *d)
{
	int i;

	for(i=0;i<10;i++)
	{
		printf("%d : %2.1f\n",i,d[i]);
	}
}

void init_data(double *d)
{
	static int flag = 0;
	int i;

	double tmp;

	if(flag==0)
	{
		srand((unsigned)time(NULL));
		flag++;
	}

	for(i=0;i<10;i++)
	{
		d[i] = rand()%100/10.0+1;
	}
}

double calc_sum(double *d)
{
	double result = 0;
	int i;

	for(i=0;i<10;i++)
	{
		result += d[i];
	}
}
