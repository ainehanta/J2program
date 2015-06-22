#include <stdio.h>

char my_toupper(char);

int main(void)
{
	char ch;

	printf("input char  : "); scanf("%c",&ch);

	printf("output char : %c",my_toupper(ch));

	printf("\n");

	return 0;
}

char my_toupper(char ch)
{
	if(ch>='a' && ch <= 'z')
	{
		ch = ch-'a'+'A';
	}

	return ch;
}
