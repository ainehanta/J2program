#include <stdio.h>

int main(void)
{
	int ten;

	for(;;)
	{
		printf("点数:"); scanf("%d",&ten);

		if(ten<0)
		break;

		printf("評定:");

		if(ten>=0 && ten<=59)
		{
			printf("D");
		}
		else if(ten<=69)
		{
			printf("C");
		}
		else if(ten<=79)
		{
			printf("B");
		}
		else if(ten<=100)
		{
			printf("A");
		}
		else
		{
			printf("0~100点の範囲で入力してください");
		}

		printf("\n");
	}

	return 0;
}
