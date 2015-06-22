#include <stdio.h>

void string_trim(char*);

int main(void)
{
	char string[80];

	printf("input >"); gets(string);

	string_trim(string);

	printf("output>%s\n",string);

	return 0;
}

void string_trim(char* string)
{
	char tmp[80];
	int i,tmp_i;
	int flag = 0;
	for(tmp_i=0,i=0;string[i]!='\0';)
	{
		if(string[i]==' '&&flag==0)
		{
			i++;
		}
		else
		{
			flag = 1;
			tmp[tmp_i++] = string[i++];
		}
	}
	tmp[tmp_i] = '\0';

	for(i=0;tmp[i]!='\0';i++)
	{
		string[i] = tmp[i];
	}

	string[i] = '\0';
}
