#include <stdio.h>

int main(void)
{
	int ten;

	for(;;)
	{
		printf("����:"); scanf("%d",&ten);

		if(ten<0)
		break;

		printf("ɾ��:");

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
			printf("0~100�����ϰϤ����Ϥ��Ƥ�������");
		}

		printf("\n");
	}

	return 0;
}
