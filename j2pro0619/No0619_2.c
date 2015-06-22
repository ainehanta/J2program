#include <stdio.h>
#include <stdlib.h>

int dice(void);

int count = 0;

int main(void)
{
	int i;

	printf("%d\n",dice());

	return 0;
}

int dice()
{
	if(!count)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	return rand()%6+1;
}
