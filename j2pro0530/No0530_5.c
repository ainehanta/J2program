#include <stdio.h>

char my_toupper(char);

int main(void)
{
	int plus;
	char ch;

	printf("input char  : "); scanf("%c",&ch);
	printf("input plus  : "); scanf("%d",&plus);

	printf("output char : %c",ch + plus);

	printf("\n");

	return 0;
}
