#include <stdio.h>

void str_append(char*,char*,int,int);

int main(void)
{
	char str1[80];
	char str2[80];
	int n,m;

	printf("input str1 > "); scanf("%s",str1);
	printf("input str2 > "); scanf("%s",str2);
	printf("input index> "); scanf("%d%d",&n,&m);

	str_append(str1,str2,n,m);

	printf("output     > %s\n",str1);

	return 0;
}

void str_append(char* str1,char* str2,int n,int m)
{
	int str1_i;
	for(str1_i=0;str1[str1_i]!='\0';str1_i++);

	for(;(n<=m)&&(str2[n]!='\0');n++,str1_i++)
	{
		str1[str1_i] = str2[n];
	}

	str1[str1_i++] = '\0';
}
