#include <stdio.h>

int arg_check(int);
int decl(int,int);

int main(void)
{
	int a,b;

	for(;;)
	{
		printf("Input [a,b] :"); scanf("%d%d",&a,&b);

		if((arg_check(a)||arg_check(b))==0)
			break;

	}

	printf("Output [a-b]:%d\n",decl(a,b));

	return 0;
}

int arg_check(int arg)
{
	if(arg>=0&&arg<=99)
		return 0;

	return 1;
}

int decl(int a,int b)
{
	return a-b;
}
