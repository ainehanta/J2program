#include <stdio.h>

int main(void)
{
	unsigned long a,b,c;

	a = (unsigned long)&b;
	b = (unsigned long)&c;
	c = (unsigned long)&a;

	printf("%x\n",c);
	printf("%x\n",*(unsigned long *)b);
	printf("%p\n",*(unsigned long *)((unsigned long)&c));
	printf("%X\n",&a);
	printf("%p\n",(unsigned long *)c);

	return 0;
}
