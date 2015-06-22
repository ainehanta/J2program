#include <stdio.h>

void func_01(char*);
char stob(char);

int main(void)
{
	int i;
	char ch[3];

	func_01(ch);

	for(i=0;i<3;i++)
	{
		printf("%c",ch[i]);
	}

	printf("\n");

	return 0;
}

void func_01(char ch[])
{
	int i;
	char tmp;

	for(i=0;i<3;i++)
	{
		printf("input %d >",i); scanf("%c%c",&ch[i],&tmp);
	}

	for(i=0;i<3;i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			ch[i] = stob(ch[i]);
		}
	}

	tmp = ch[0];
	ch[0] = ch[2];
	ch[2] = tmp;
}

char stob(char ch)
{
	ch = ch - 'a' + 'A';

	return ch;
}
