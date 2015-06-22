#include <stdio.h>
int main(void)
{
	int result[17] = {1};
	int i;

	for(i=0;i<17;i++)
	{
		printf("%d\n",result[i]);
		result[i+1] = result[i] * 2;
	}
}
