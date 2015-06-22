#include <stdio.h>
main()
{
	int i;
	int a = 0;
	int array[10];

	for(i=0;i<10;i++)
	{
		array[i] = (i+1)*2-1;
	}

	for(i=0;i<10;i++)
	{
		printf("array[%d]\t= %d\n",i,array[i]);
	}

	for(i=0;i<10;i++)
	{
		a+=array[i];
	}

	printf("配列の合計:%d\n",a);
}
