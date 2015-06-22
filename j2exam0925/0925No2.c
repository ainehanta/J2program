#include <stdio.h>

void sort_string(char*,char*);

int main(void)
{
	char str1[80],str2[80];

	printf("String 1 : "); scanf("%s",str1);
	printf("String 2 : "); scanf("%s",str2);

	sort_string(str1,str2);

	return 0;
}

void sort_string(char* str1,char* str2)
{
	int str1_i,str2_i;
	int flag = 0;

	for(str1_i = str2_i =0;str1[str1_i]!='\0'&&str2[str2_i]!='\0';str1_i++,str2_i++)
	{
		if(str1[str1_i]<str2[str2_i])
		{
			printf("%s %s\n",str1,str2);
			flag = 1;
			break;
		}
		else if(str1[str1_i]>str2[str2_i])
		{
			printf("%s %s\n",str2,str1);
			flag = 1;
			break;
		}
	}

	if(flag==0)
	{
		printf("%s == %s\n",str1,str2);
	}
}
