#include <stdio.h>

int main(void)
{
	int i;
	int result = 0;

	for(i=1;i<=10;i++)
	{
		if(i%3)
			result += i;
	}

	printf("output = %d\n",result);

	return 0;
}
