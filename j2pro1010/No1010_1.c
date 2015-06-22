#include <stdio.h>

int main(void)
{
	int array[10];
	int i;

	for(i=0;i<10;i++)
		*(array+i) = 0;

	return 0;
}
