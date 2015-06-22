#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int val;

	printf("RAND_MAX=%d\n",RAND_MAX);

	for(i=0;i<10;i++)
	{
		val = rand();

		printf("%d\n",val);
	}

	return 0;
}
