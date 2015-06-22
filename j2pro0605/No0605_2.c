#include <stdio.h>
#include <math.h>

int main(void)
{
	char ch,dummy,array[5];
	int count = 0;
	int i;

	for(i=0;i<4;i++)
	{
		printf("input : ");
		scanf("%c%c",&ch,&dummy);

		array[i] = ch;
	}

	array[i] = '\0';

	for(i=0;array[i]!='\0';i++)
	{
		count += (array[i]-'0')*pow(10,3-i);
	}

	printf("output: %d\n",count);

	return 0;
}
