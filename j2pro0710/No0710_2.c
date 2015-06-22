#include <stdio.h>

int main(void)
{
	int ninzu;
	double youkan;

	printf("人数	   > "); scanf("%d",&ninzu);
	printf("長さ	   > "); scanf("%lf",&youkan);

	printf("一人当たり > %f cm\n",youkan/ninzu);

	return 0;
}
