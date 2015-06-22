#include <stdio.h>

int my_strlen(char*);

int main(void)
{
	char string[80];
	int length;

	printf("input > "); scanf("%s",string);

	length = my_strlen(string);

	printf("output> %d\n",length);

	return 0;
}

int my_strlen(char* str)
{
	int i = 0;

	for(i=0;*(str+i)!='\0';i++);

	return i;
}
