#include <stdio.h>

int main(void)
{
	unsigned long a[2];
	unsigned long b[2];
	unsigned long c[2];

	a[1] = (unsigned long)&b[0];
	b[1] = (unsigned long)&c[0];
	c[1] = (unsigned long)&a[0];

	a[0] = 1;
	b[0] = 2;
	c[0] = 3;

	printf("%p\n",c[1]);
	printf("%p\n",((unsigned long *)(unsigned long *)a[1]+1)+1);
	printf("%p\n",*(((unsigned long *)b[1])+1));

	return 0;
}
