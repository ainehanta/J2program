#include<stdio.h>
main ()
{
	int age;

	printf("問1\n");

	printf("年齢:"); scanf("%d",&age);

	if(age>=0 && age<6)
	{
		printf("入園料:無料\n");
	}
	else if(age>=6 && age<12)
	{
		printf("入園料:350円\n");
	}
	else if(age>=12 && age<=110)
	{
		printf("入園料:700円\n");
	}
	else
	{
		printf("0~110までの範囲で入力してください。\n");
	}
}
