#include <stdio.h>

int sum_of_multiple_of_three(int,int);

int main(void)
{
	int a,b;

	printf("����:"); scanf("%d",&a);
	printf("��λ:"); scanf("%d",&b);

	printf("%d����%d�ޤǤ�3���ܿ�����:%d\n",a,b,sum_of_multiple_of_three(a,b));

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
