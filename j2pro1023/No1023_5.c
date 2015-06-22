#include <stdio.h>

void trim_str_com_after(char*);

int main(void)
{
	char string[80];
	
	printf("input > "); gets(string);

	trim_str_com_after(string);

	printf("output> %s\n",string);
}

void trim_str_com_after(char* string)
{
	char tmp[80];
	int i,tmp_i;

	i = tmp_i = 0;
	while(string[i]!='\0')
	{
		if(string[i]==',')
		{
			tmp[tmp_i++] = string[i++];
			for(;string[i]==' ';i++);
		}
		else
		{
			tmp[tmp_i++] = string[i++];
		}
	}
	tmp[tmp_i++] = '\0';

	for(i=0;tmp[i]!='\0';i++)
		string[i] = tmp[i];
	string[i] = '\0';
}
