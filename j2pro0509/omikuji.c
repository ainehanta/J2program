#include <stdio.h>

void omikuji(int number)
{
	if(number == 1)
	{
		printf("��ȤǤ����������͡�\n");
	}
	else if(number == 2)
	{
		printf("�ȤǤ�����ä�����\n");
	}
	else if(number == 3)
	{
		printf("���ȤǤ����ޤ������̤���\n");
	}
	else
	{
		printf("�����������ʳ��ο��ͤ����Ϥ���ޤ�����\n");
		printf("�����������Τɤ줫�����Ϥ��Ƥ͡�\n");
	}
}

int main(void)
{
	omikuji(1);

	return 0;
}