#include <stdio.h>

int main(void)
{
	int hex_a,hex_b,hex_c;
	char byte_a,byte_b,byte_c;
	double fl_a,fl_b,fl_c;

	printf("int a\t= %p\n",&hex_a);
	printf("int b\t= %p\n",&hex_b);
	printf("int c\t= %p\n",&hex_c);
	printf("char a\t= %p\n",&byte_a);
	printf("char b\t= %p\n",&byte_b);
	printf("char c\t= %p\n",&byte_c);
	printf("double a\t= %p\n",&fl_a);
	printf("double b\t= %p\n",&fl_b);
	printf("double c\t= %p\n",&fl_c);

	return 0;
}
