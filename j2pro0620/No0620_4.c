#include <stdio.h>

char str_max(char*);

int main(void)
{
	char str[80];

	printf("input = "); scanf("%s",str);

	printf("%s�Τ��������˰����礭������ե��٥åȤ�%c�Ǥ���\n",str,str_max(str));

	return 0;
}

char str_max(char str[])
{
	char ret;
	int i;

	ret = str[0];

	for(i=1;str[i]!='\0';i++)
	{
		if(ret<str[i])
			ret = str[i];
	}

	return ret;
}
