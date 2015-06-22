#include <stdio.h>

void compress(char*);

void insert_str(char*,char*,int);
void make_str(char*,char,int);

int main(void)
{
	char buffer[100];

	printf("Input String\t\t: "); scanf("%s",buffer);
	compress(buffer);

	printf("Compress Result\t\t: %s\n",buffer);
}

void compress(char* str)
{
	
}

void insert_str(char* str1,char* str2,int index)
{
	char temp[50];
	int i;
	int str2_length;

	for(i=index;str1[i]!='\0';i++) temp[i-index] = str1[i];
	temp[i-index] = '\0';

	for(i=index;str2[i-index]!='\0';i++) str1[i] = str2[i-index];
	str2_length = i;

	for(;temp[i-str2_length]!='\0';i++)
	{
		str1[i] = temp[i-str2_length];
	}
	str1[i] = '\0';
}

void make_str(char* str,char ch,int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		str[i] = ch;
	}
}
