#include <stdio.h>

int main(void)
{
	char ch,dummy;
	char array[6];
	int i;

	for(i=0;i<5;i++)
	{
		printf("input : ");
		scanf("%c%c",&ch,&dummy);
		array[i] = ch;
	}

	array[i] = '\0';

	printf("\n");

	for(i=1;i<6;i++)
	{
		printf("output: %c\n",array[5-i]);
	}

	return 0;
}
