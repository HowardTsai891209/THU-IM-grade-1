#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()				//��J������ �ֹ�O�_���P�@�H 
{
	struct person
	{
		int age;
		float height;
		float weight;
		char dna[10];	
	} A = {19, 171.9, 66.2, "ATCGATCGAT"}; 
	struct person B;
	printf("�п�J�~��: \n");
	fflush(stdout);
	scanf("%d",&B.age);	
	
	printf("�п�J����: \n");
	fflush(stdout);
	scanf("%f",&B.height);
	
	printf("�п�J�魫: \n");
	fflush(stdout);
	scanf("%f",&B.weight);
	
	printf("�п�Jdna: \n");
	fflush(stdout);
	scanf("%s",&B.dna);
	
	if(strcmp(A.dna,B.dna)==0)  //�p�G�r��ۦP �^��0 
	{
		printf("�o�O�P�@�ӤH");
	}
	else
	{
		printf("�o���O�P�@�ӤH");
	}
} 
