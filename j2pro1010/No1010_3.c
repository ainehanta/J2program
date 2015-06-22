#include <stdio.h>

int main(void)
{
	int array[5];
	int i;
	int *pt;

	pt = &(array[2]);

	for(i=0;i<5;i++)
		array[i] = i+1;

	for(i=0;i<5;i++)
	{
		printf("array[%d] = %d\n",i,*(pt+(i-2)));
	}

	return 0;
}

