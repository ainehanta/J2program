#include <stdio.h>

void tenki_hantei(int kousui)
{
	printf("ŷ������:");

	if(kousui>=0 && kousui<20)
	{
		printf("����\n");
	}
	else if(kousui<50)
	{
		printf("�ޤ�\n");
	}
	else if(kousui<=100)
	{
		printf("��\n");
	}
	else
	{
		printf("0~100�δ֤����Ϥ��Ƥ�������\n");
	}
}

int main(void)
{
	int kousui;

	for(;;)
	{
		printf("�߿��Ψ:"); scanf("%d",&kousui);

		if(kousui<0)
		break;

		tenki_hantei(kousui);
	}

	return 0;
}
