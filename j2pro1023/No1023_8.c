#include <stdio.h>

char stack[5];
int stack_pointer = 0;

int main(void)
{
	char data;
	char dummy;

	int i;
	for(i=0;i<5;i++)
	{
		printf("���󥹤�:"); scanf("%c%c",&data,&dummy);
		stack[stack_pointer++]=data;
		printf("�ޤ�����롩[y,n]"); scanf("%c%c",&data,&dummy);
		if(data=='n')
			break;
	}

	printf("������ޤ�����"); scanf("%d",&data);
	if(data>stack_pointer)
	{
		printf("����������%d��ޤǤǤ���\n",stack_pointer);
	}
	else
	{
		stack_pointer -= data;
		printf("������륷��Ĥ�%c�Ǥ���\n",stack[stack_pointer-1]);
	}

	return 0;
}
