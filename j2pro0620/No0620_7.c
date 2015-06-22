#include <stdio.h>

void add_str(char*);

int main(void)
{
	char str[80];

	printf("input = "); scanf("%s",str);

	add_str(str);

	printf("output= %s\n",str);

	return 0;
}

void add_str(char str1[])
{
	char str2[] = "KNCT";
	int i,count;

	for(count=0;str1[count]!='\0';count++);

	for(i=count,count=0;str2[count]!='\0';i++,count++)
	{
		str1[i] = str2[count];
	}

	str1[i] = '\0';
}
