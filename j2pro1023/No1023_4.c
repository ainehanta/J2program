#include <stdio.h>

void string_trim(char*);

int main(void)
{
	char string[80];

	printf("input >"); gets(string);

	string_trim(string);

	printf("output>%s@\n",string);

	return 0;
}

void string_trim(char* string)
{
	int i;
	int length;

	for(length=0;string[length]!='\0';length++);

	length--;
	for(;(length>=0)&&(string[length]==' ');length--)

	string[length] = '\0';
}
