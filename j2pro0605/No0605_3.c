#include <stdio.h>

int main(void)
{
	char str[] = "kisarazu";
	int i;

	for(i=0;str[i]!='\0';i++)
		;

	printf("%s��ʸ����:%d\n",str,i);

	return 0;
}
