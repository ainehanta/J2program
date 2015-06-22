#include <stdio.h>

int main(void)
{
	int a;

	a = 1;

	if(a==1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(0)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(5)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(a>=-1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(a=1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if(0<=a && a<=10)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	a = 0<a && 8<5;
	printf("(8)=%d\n",a);

	return 0;
}
