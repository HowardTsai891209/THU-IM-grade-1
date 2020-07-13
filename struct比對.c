#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()				//輸入個體資料 核對是否為同一人 
{
	struct person
	{
		int age;
		float height;
		float weight;
		char dna[10];	
	} A = {19, 171.9, 66.2, "ATCGATCGAT"}; 
	struct person B;
	printf("請輸入年齡: \n");
	fflush(stdout);
	scanf("%d",&B.age);	
	
	printf("請輸入身高: \n");
	fflush(stdout);
	scanf("%f",&B.height);
	
	printf("請輸入體重: \n");
	fflush(stdout);
	scanf("%f",&B.weight);
	
	printf("請輸入dna: \n");
	fflush(stdout);
	scanf("%s",&B.dna);
	
	if(strcmp(A.dna,B.dna)==0)  //如果字串相同 回傳0 
	{
		printf("這是同一個人");
	}
	else
	{
		printf("這不是同一個人");
	}
} 
