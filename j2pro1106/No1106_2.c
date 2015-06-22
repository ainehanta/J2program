#include <stdio.h>

char* search(char*,char);

int main(void)
{
	char str[80];
	char ch,dummy[10];
	int i;
	char* p;

	printf("input str > "); scanf("%s",str);
	printf("input ch  > "); scanf("%s",dummy);

	ch = dummy[0];

	for(i=0;str[i];i++)
	{
		printf("%c = %p\n",str[i],&str[i]);
	}

	p = search(str,ch);

	printf("search > %p\n",p);

	return 0;
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
