#include <stdio.h>

int sum_of_multiple_of_three(int,int);

int main(void)
{
	int a,b;

	printf("開始:"); scanf("%d",&a);
	printf("終了:"); scanf("%d",&b);

	printf("%dから%dまでの3の倍数の和:%d\n",a,b,sum_of_multiple_of_three(a,b));

	return 0;
}

int sum_of_multiple_of_three(int a,int b)
{
	int i;
	int result = 0;

	if(b<a)
		return -1;

	if(a==b && a%3==0)
		return a;

	for(i=a;i<=b;i++)
	{
		if(i%3 == 0)
		{
			result += i;
		}
	}

	return result;
}
