#include <stdio.h>

void small_to_big(char*);

int main(void)
{
	char str[80] = {'\0'};

	printf("input = "); scanf("%s",str);

	small_to_big(str);

	printf("output= %s\n",str);

	return 0;
}

void small_to_big(char str[])
{
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		str[i] = str[i]-'A'+'a';
	}
}
