#include <stdio.h>

char stack[5];
int stack_pointer = 0;

int main(void)
{
	char data;
	char dummy;

	int i;
	for(i=0;i<5;i++)
	{
		printf("タンスへ:"); scanf("%c%c",&data,&dummy);
		stack[stack_pointer++]=data;
		printf("まだ入れる？[y,n]"); scanf("%c%c",&data,&dummy);
		if(data=='n')
			break;
	}

	printf("何枚着ますか？"); scanf("%d",&data);
	if(data>stack_pointer)
	{
		printf("着られる枚数は%d枚までです。\n",stack_pointer);
	}
	else
	{
		stack_pointer -= data;
		printf("次に着るシャツは%cです。\n",stack[stack_pointer-1]);
	}

	return 0;
}
