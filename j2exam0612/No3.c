#include <stdio.h>

void cto2(unsigned char);

int main(void)
{
	unsigned char a = 0x8B;
	unsigned char b = 0x1F;

	a >>= 2;
	b <<= 1;

	a = a + b;

	cto2(a);

	printf("%8d\n",a);

	printf("%8X\n",a);

	return 0;
}

void cto2(unsigned char num)
{
	int a[8] = {0};
	int i;

	for(i=0;i<8;i++)
	{
		a[i] = num % 2;
		num /= 2;
	}

	for(i=0;i<8;i++)
	{
		printf("%d",a[7-i]);
	}

	printf("\n");
}
