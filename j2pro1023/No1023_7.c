#include <stdio.h>
#include <stdlib.h>

void string_trim(char*);
int calc(char*);

int main(void)
{
	char str[] = "12, 34, 56,987,  1,   5";
	string_trim(str);

	printf("output> %d\n",calc(str));
}

int calc(char* string)
{
	char tmp[20];
	int array[10];
	int i,tmp_i,array_i;
	int result;

	for(array_i=0,tmp_i=0,i=0;string[i]!='\0';i++)
	{
		if(string[i]==',')
		{
			i++;
			tmp[tmp_i++] = '\0';
			printf("%s\n",tmp);
			array[array_i++] = atoi(tmp);
			tmp_i=0;
		}

		tmp[tmp_i++] = string[i];
	}

	tmp[tmp_i++] = '\0';
	printf("%s\n",tmp);
	array[array_i++] = atoi(tmp);

	for(result=i=0;i<array_i;i++)
	{
		result += array[i];
	}

	return result;
}

void string_trim(char* string)
{
	char tmp_buffer[80];
	int tmp_buffer_pointer = 0;
	int i;

	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]!=' ')
		{
			tmp_buffer[tmp_buffer_pointer++] = string[i];
		}
	}

	tmp_buffer[tmp_buffer_pointer++] = '\0';

	for(i=0;tmp_buffer[i]!='\0';i++)
		string[i] = tmp_buffer[i];

	string[i] = '\0';
}
