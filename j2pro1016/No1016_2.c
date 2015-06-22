#include <stdio.h>

void print_string(char*);

int main(void)
{
	char* ptr;

	ptr = "edamameedamameedamame";

	print_string(ptr);

	return 0;
}

void print_string(char* str)
{
	int i;

	for(i=0;*(str+i)!='\0';i++)
	{
		printf("%c",*(str+i));
	}

	printf("\n");
}
