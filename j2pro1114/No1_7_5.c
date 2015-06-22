#include <stdio.h>

void my_strcpy(unsigned long *,char*);
void print_ul(unsigned long *);

int main(void)
{
	unsigned long a[20];
	unsigned long b[20];
	unsigned long c[20];

	a[19] = (unsigned long)&b[0];
	b[19] = (unsigned long)&c[0];
	c[19] = (unsigned long)&a[0];

	my_strcpy(a,"abcd");
	my_strcpy(b,"efgh");
	my_strcpy(c,"ijkl");

	print_ul(c);
	print_ul((unsigned long *)b[19]);
	print_ul((unsigned long *)*(((unsigned long *)a[19])+19));

	return 0;
}

void print_ul(unsigned long *str)
{
	while(*str)
	{
		printf("%c",(char)*str++);
	}

	printf("\n");
}

void my_strcpy(unsigned long * str1,char* str2)
{
	int i;

	for(i=0;str2[i]!='\0';i++)
	{
		str1[i] = str2[i];
	}

	str1[i] = '\0';
}
