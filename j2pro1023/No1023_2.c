#include <stdio.h>

void conv_str_print(char*);
void conv_str(char*);

int main(void)
{
	char string[] = "12,34,56,987,1,5";

	conv_str_print(string);

	conv_str(string);

	printf("%s\n",string);

	return 0;
}

void conv_str_print(char* string)
{
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='0'&&string[i]<='9')
			printf("%c",string[i]);
		else
			printf(" ");
	}

	printf("\n");
}

void conv_str(char* string)
{
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		if(!(string[i]>='0'&&string[i]<='9'))
			string[i] = ' ';
	}
}
