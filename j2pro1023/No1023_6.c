#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char array[11];

	srand((unsigned)time(NULL));

	int i;
	for(i=0;i<10;i++)
	{
		array[i] = 'a' + i;
	}
	array[i] = '\0';

	int tmp,index;
	for(i=0;i<10;i++)
	{
		index = rand()%10;
		tmp = array[i];
		array[i] = array[index];
		array[index] = tmp;
	}

	printf("%s\n",array);
}
