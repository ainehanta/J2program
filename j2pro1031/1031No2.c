#include <stdio.h>

void array_max_min(int*,int*,int*);

int main(void)
{
	int array[5] = {0,1,5,3,4};
	int max,min;

	array_max_min(array,&max,&min);

	printf("max = %d\nmin = %d\n",max,min);
}

void array_max_min(int* a,int* max,int* min)
{
	int i;
	*max = 0;
	*min = 0;
	for(i=0;i<5;i++)
	{
		if(*max<*(a+i))
		{
			*max = *(a+i);
		}
		if(*min>*(a+i))
		{
			*min = *(a+i);
		}
	}
}
