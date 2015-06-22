#include <stdio.h>

void message(void)
{
	printf("Have Fun With Programming!\n");
}

int main(void)
{
	int i;

	for(i=1;i<=7;i++)
	{
		printf("%2d:",i);
		message();
	}
}
