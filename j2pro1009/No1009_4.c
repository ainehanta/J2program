#include <stdio.h>

void two_num_swap(int*,int*);

int main(void)
{
	int x,y;
	printf("input > "); scanf("%d%d",&x,&y);

	two_num_swap(&x,&y);

	printf("output > x = %d,y = %d\n",x,y);
	return 0;
}

void two_num_swap(int *x,int *y)
{
	int tmp;

	if(*x>*y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
	}
}
