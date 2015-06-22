#include <stdio.h>

int main(void)
{
	char ch;

	printf("input char  : "); scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z')
		printf("output char : %c\n",ch);

	return 0;
}
