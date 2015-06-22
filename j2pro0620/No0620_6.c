#include <stdio.h>

void big_to_small(char*);

int main(void)
{
	char str[80] = {'\0'};

	printf("input = "); scanf("%s",str);

	big_to_small(str);

	printf("output= %s\n",str);

	return 0;
}

void big_to_small(char str[])
{
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		str[i] = str[i]-'a'+'A';
	}
}
