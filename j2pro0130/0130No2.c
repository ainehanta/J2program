#include <stdio.h>

int divide(char*,int*,char*);

int main(void)
{
	char buffer[80];
	int data[10];
	char op[10];

	int i;

	printf("Input expression : "); scanf("%s",buffer);

	divide(buffer,data,op);

	printf("exp\t=%s\n",buffer);

	printf("int\t=");
	for(i=0;data[i]!=0;i++)
	{
		printf("%d ",data[i]);
	}
	printf("\n");

	printf("op \t=");
	for(i=0;op[i]!='\0';i++)
	{
		printf("%c ",op[i]);
	}
	printf("\n");

	return 0;
}

int divide(char* exp,int* data,char* op)
{
	int i = 0;
	int data_i =0;
	int op_i = 0;
	
	data[data_i++] = exp[i]-'0';
	op[op_i++] = exp[i+1];
	op[op_i++] = '\0';
	data[data_i++] = exp[i+2]-'0';
	data[data_i++] = 0;
	i+=3;

	for(;exp[i]!='\0';)
	{
		op[--op_i] = exp[i];
		op[++op_i] = '\0';
		data[--data_i] = exp[i+1]-'0';
		data[++data_i] = 0;
		i+=2;
	}
}
