#include <stdio.h>

int comp(int,int);
void sort(int,int*);

int main(void)
{
	int array[] = {10,20,5,-2,65,-85,23,1,0,5};
	int i;

	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	sort(10,array);

	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	return 0;
}

int comp(int a,int b)
{
	if(a>b)
		return 1;
	else if(a<b)
		return -1;
	else
		return 0;
}

void sort(int length,int* array)
{
	int loop_i;
	int i;
	int tmp;
	for(loop_i=0;loop_i<length;loop_i++)
	{
		for(i=0;i<length-1;i++)
		{
			if(comp(array[i],array[i+1])==1)
			{
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
			}
		}
	}
}
