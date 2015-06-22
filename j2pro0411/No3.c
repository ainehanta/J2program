#include<stdio.h>
main()
{
	int line;
	int x,y;

	printf("Ìä3\n");

	printf("¹Ô¿ô:"); scanf("%d",&line);

	for(y=1;y<=line;y++)
	{
		for(x=1;x<=y;x++)
		{
			printf("*");
		}

		printf("\n");
	}
}
