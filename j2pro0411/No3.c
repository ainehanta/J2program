#include<stdio.h>
main()
{
	int line;
	int x,y;

	printf("��3\n");

	printf("�Կ�:"); scanf("%d",&line);

	for(y=1;y<=line;y++)
	{
		for(x=1;x<=y;x++)
		{
			printf("*");
		}

		printf("\n");
	}
}
