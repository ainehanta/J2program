#include<stdio.h>
main ()
{
	int age;

	printf("��1\n");

	printf("ǯ��:"); scanf("%d",&age);

	if(age>=0 && age<6)
	{
		printf("������:̵��\n");
	}
	else if(age>=6 && age<12)
	{
		printf("������:350��\n");
	}
	else if(age>=12 && age<=110)
	{
		printf("������:700��\n");
	}
	else
	{
		printf("0~110�ޤǤ��ϰϤ����Ϥ��Ƥ���������\n");
	}
}
