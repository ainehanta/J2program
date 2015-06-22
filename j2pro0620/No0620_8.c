#include <stdio.h>

void add_str(char*,char*);

int main(void)
{
	char str1[80] = {'\0'};
	char str2[80] = {'\0'};

	printf("str1 input = "); scanf("%s",str1);
	printf("str2 input = "); scanf("%s",str2);
	
	add_str(str1,str2);

	printf("output= %s\n",str1);

	return 0;
}

void add_str(char str1[],char str2[])
{
	int i,count;

	for(count=0;str1[count]!='\0';count++);

	for(i=count,count=0;str2[count]!='\0';i++,count++)
	{
		str1[i] = str2[count];
	}

	str1[i] = '\0';
}
