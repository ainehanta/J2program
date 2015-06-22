#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(int*);
void sort(int*);
int median(int*);

int main(void)
{
	int array[10];
	int result;

	init(array);

	result = median(array);

	printf("Median Value\t: %d\n",result);

	return 0;
}

void init(int* array)
{
	int flag = 0;
	if(flag == 0)
	{
		srand((unsigned)time(NULL));
		flag++;
	}

	int i;

	for(i=0;i<10;i++)
	{
		array[i] = rand()%10;
	}
}

void sort(int* array)
{
	int i,j;
	int temp;

	printf("Start Sort\t: ");
	for(i=0;i<10;i++) printf("%d",array[i]);
	printf("\n");

	for(j=0;j<10;j++)
	{
		for(i=0;i<9;i++)
		{
			if(array[i]>array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}

	printf("Finish Sort\t: ");
	for(i=0;i<10;i++) printf("%d",array[i]);
	printf("\n");
}

int median(int* array)
{
	int result = 0;

	sort(array);
	result = (array[4] + array[5])/2;

	return result;
}
