#include <stdio.h>

void compress(char*);
void decompress(char*);

void remove_str(char*,int,int);
int insert_str(char*,char*,int);
void make_str(char*,char,int);

int main(void)
{
	char buffer[100];

	printf("Input String\t\t: "); scanf("%s",buffer);
	compress(buffer);

	printf("Compress Result\t\t: %s\n",buffer);

	decompress(buffer);

	printf("Decompress Result\t: %s\n",buffer);
}

void compress(char* str)
{
	int i;
	int flag = 0;
	int count;

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			for(count=i;str[count]==str[count+1];count++);
			count -= i;
			str[i+1] = count + '0' + 1;
			remove_str(str,i+2,count+i+1);
			i+=1;
		}
	}
}

void decompress(char* str)
{
	int i;
	int count;
	char temp[50];

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			count = str[i] - '0' - 1;
			make_str(temp,str[i-1],count);
			remove_str(str,i,i+1);
			insert_str(str,temp,i);
			i += count;
		}
	}
}

void remove_str(char* str,int start,int end)
{
	int i;
	char temp[50];

	for(i=end;str[i]!='\0';i++)	temp[i-end] = str[i];
	temp[i-end] = '\0';

	for(i=start;temp[i-start]!='\0';i++) str[i] = temp[i-start];

	str[i] = '\0';
}

int insert_str(char* str1,char* str2,int index)
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

	return str2_length-index;
}

void make_str(char* str,char ch,int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		str[i] = ch;
	}
}
