#include<stdio.h>
#include<stdlib.h>

struct data
{
	char name[10];
	int math;
};
void display(struct data*);

int main(void)
{
	int i;
	struct data *list[5]=
	{
		{"Jenny",84},
		{"Mary",74},
		{"Bob",64},
		{"Alice",44},
		{"John",94}
	};
	printf("list[4] at %p \n",&(list[4]));
	//scanf("%d", &i);
	display(list[4]);
}

void display(struct data *st)
{
	printf("st at %p \n", &st);
	printf("sizeof(st) = %d \n", sizeof(st));
	printf("�ǥͩm�W: %s \n", (*st).name);
	printf("�ƾǦ��Z: %d \n", (*st).math);
	*&st->math -= 10;
	printf("�ƾǦ��Z2: %d \n", (*st).math);
}
