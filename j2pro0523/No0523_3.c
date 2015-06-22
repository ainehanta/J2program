#include <stdio.h>

int main(void)
{
	int i;
	int array[6],array_gyaku[6];

	printf("input\n");
	for(i=0;i<6;i++)
	{
		printf("array[%d] = ",i); scanf("%d",&array[i]);
	}

	for(i=0;i<6;i++)
	{
		array_gyaku[5-i] = array[i];
	}

	printf("\noutput\n");
	for(i=0;i<6;i++)
	{
		printf("array_gyaku[%d] = %d\n",i,array_gyaku[i]);
	}

	return 0;
}
