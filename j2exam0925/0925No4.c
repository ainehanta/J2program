#include <stdio.h>

#define BIGGER	 1
#define SMALLER	 2
#define MATCH	 0	

#define Y	10
#define X	20

int sort_string(char*,char*);
void print_matrix(char[][X]);
void change_matrix(char[][X],int);
void input_dictionary(char[][X]);
void sort_matrix(char[][X]);

int main(void)
{
	char dictionary[Y][X];

	input_dictionary(dictionary);

	printf("Sorting...\n");

	sort_matrix(dictionary);
	print_matrix(dictionary);

	return 0;
}

int sort_string(char* str1,char* str2)
{
	int str1_i,str2_i;
	int flag = MATCH;

	for(str1_i = str2_i =0;str1[str1_i]!='\0'&&str2[str2_i]!='\0';str1_i++,str2_i++)
	{
		if(str1[str1_i]<str2[str2_i])
		{
			flag = SMALLER;
			break;
		}
		else if(str1[str1_i]>str2[str2_i])
		{
			flag = BIGGER;
			break;
		}
	}

	return flag;
}

void print_matrix(char matrix[][X])
{
	int x,y;

	for(y=0;y<Y;y++)
	{
		printf(" %s \n",matrix[y]);
	}
}

void change_matrix(char matrix[][X],int col)
{
	int x;
	char tmp;

	printf("change\n");

	for(x=0;x<X;x++)
	{
		tmp = matrix[col][x];
		matrix[col][x] = matrix[col+1][x];
		matrix[col+1][x] = tmp;
	}
}

void input_dictionary(char matrix[][X])
{
	int x,y;

	for(y=0;y<Y;y++)
	{
		printf("input %2d > ",y); scanf("%s",matrix[y]);
	}
}

void sort_matrix(char matrix[][X])
{
	int i;
	int y;

	for(i=0;i<Y*10;i++)
	{
		for(y=0;y<Y-1;y++)
		{
			if(sort_string(matrix[y],matrix[y+1])==BIGGER)
			{
				change_matrix(matrix,y);
			}
		}
	}
}
