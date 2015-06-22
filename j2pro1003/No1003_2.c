#include <stdio.h>

int calc_add_div(int,int,int*,int*);

int main(void)
{
	int mul,div;
	int n1,n2;
	int ret = 0;

	printf("input > "); scanf("%d%d",&n1,&n2);

	ret = calc_add_div(n1,n2,&mul,&div);

	printf("n1 * n2 = %d, n1 / n2 = %d\n",mul,div);

	if(ret)
		printf("割りきれる。ret = %d\n",ret);
	else
		printf("割り切れない。ret = %d\n",ret);

	return 0;
}

int calc_add_div(int n1,int n2,int* mul,int* div)
{
	*mul = n1 * n2;
	*div = n1 / n2;

	if(n1%n2)
		return 0;
	else
		return 1;
}
