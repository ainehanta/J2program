#include <stdio.h>

int search_by_index(char*,char*,int);
char* search(char*,char);

int main(void)
{
	char str1[80],str2[80];
	int i,ret;

	printf("input str1 > "); scanf("%s",str1);
	printf("input str2 > "); scanf("%s",str2);
	printf("input index> "); scanf("%d",&i);

	if(search_by_index(str1,str2,i))
		printf("含まれている\n");
	else
		printf("含まれていない\n");

	return 0;
}

int search_by_index(char* str1,char* str2,int index)
{
	if(search(str1,str2[index])==NULL)
		return 0;
	else
		return 1;
}

char* search(char* str,char ch)
{
	int flag = 0;
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			return &str[i];
		}
	}

	return NULL;
}
