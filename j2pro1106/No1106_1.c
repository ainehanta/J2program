#include <stdio.h>

void str_append(char*,char*);

int main(void)
{
	char str1[80];
	char str2[80];

	printf("input > "); scanf("%s",str1);
	printf("input > "); scanf("%s",str2);

	str_append(str1,str2);

	printf("output> %s\n",str1);

	return 0;
}

void str_append(char* str1,char* str2)
{
	while(*str1++);
	str1--;

	while(*str2)
	{
		*str1++ = *str2++;
	}

	*str1 = '\0';
}
