#include <stdio.h>

int main(void)
{
	int ninzu;
	double youkan;

	printf("�Ϳ�	   > "); scanf("%d",&ninzu);
	printf("Ĺ��	   > "); scanf("%lf",&youkan);

	printf("��������� > %f cm\n",youkan/ninzu);

	return 0;
}
