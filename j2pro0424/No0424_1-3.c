#include <stdio.h>
int main(void)
{
	int result[17] = {1};
	int i;

	for(i=0;i<17;i++)
	{
		result[i+1] = result[i] * 2;
	}

	for(i=0;i<17;i++)
	{
		printf("%10d\n",result[16-i]);
	}
}
