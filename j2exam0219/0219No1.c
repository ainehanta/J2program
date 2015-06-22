#include <stdio.h>

typedef struct
{
	char name[20];
	int japanese;
	int mathmatics;
	int programming;
} student;

void init_score(student*);
void print_score(student*);
void calc_total(student*);

int main(void)
{
	student stu;

	init_score(&stu);
	print_score(&stu);
	calc_total(&stu);

	return 0;
}

void init_score(student* stu)
{
	printf("\n");
	printf("Input Name\t\t: "); scanf("%s",stu->name);
	printf("Input Japanese\t\t: "); scanf("%d",&(stu->japanese));
	printf("Input Mathmatics\t: "); scanf("%d",&(stu->mathmatics));
	printf("Input Programming\t: "); scanf("%d",&(stu->programming));
	printf("\n");
}

void print_score(student* stu)
{
	printf("\n");
	printf("Name\t\t: %s\n",stu->name);
	printf("Japanese\t: %d\n",stu->japanese);
	printf("Mathimatics\t: %d\n",stu->mathmatics);
	printf("Programming\t: %d\n",stu->programming);
	printf("\n");
}

void calc_total(student* stu)
{
	int total;

	total = stu->japanese +
			stu->mathmatics +
			stu->programming;

	printf("\n");
	printf("Name\t\t: %s\n",stu->name);
	printf("Total Score\t: %d\n",total);
	printf("\n");
}
