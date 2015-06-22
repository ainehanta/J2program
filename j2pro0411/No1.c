#include<stdio.h>
main ()
{
	int age;

	printf("Ìä1\n");

	printf("Ç¯Îğ:"); scanf("%d",&age);

	if(age>=0 && age<6)
	{
		printf("Æş±àÎÁ:ÌµÎÁ\n");
	}
	else if(age>=6 && age<12)
	{
		printf("Æş±àÎÁ:350±ß\n");
	}
	else if(age>=12 && age<=110)
	{
		printf("Æş±àÎÁ:700±ß\n");
	}
	else
	{
		printf("0~110¤Ş¤Ç¤ÎÈÏ°Ï¤ÇÆşÎÏ¤·¤Æ¤¯¤À¤µ¤¤¡£\n");
	}
}
