#include <stdio.h>

int print_longer_str(char*,char*);

int main(void)
{
	char str1[80];
	char str2[80];

	int result;

	printf("Input str1 : "); scanf("%s",str1);
	printf("Input str2 : "); scanf("%s",str2);

	result = print_longer_str(str1,str2);

	printf("Returned Value : %d\n",result);

	return 0;
}

int print_longer_str(char* str1,char* str2)
{
	int str1_count,str2_count,ret;
	ret = 0;

	for(str1_count=0;str1[str1_count]!='\0';str1_count++);
	for(str2_count=0;str2[str2_count]!='\0';str2_count++);

	if(str1_count > str2_count)
	{
		printf("%s\n",str1);
		ret = str1_count;
	}
	else
	{
		printf("%s\n",str2);
		ret = str2_count;
	}

	return ret;
}
