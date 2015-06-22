#include <stdio.h>

int main(void)
{
	int result = 0;
	int i;

	for(i=123;i<=456;i++)
	{
		result += i;
	}

	printf("123から456までの和:%d\n",result);

	return 0;
}
