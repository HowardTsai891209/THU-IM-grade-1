#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>		//�����������q �_�T���ϫ� 
int arr[25];
char brr[10][25];
void volume(void)
{
	int i;
	int j;
	int k;
	int n;
	for(i=10;i>0;i--)
	{
		for(j=0;j<25;j++)
		{
			if(arr[j]>=i)
			{
				brr[10-i][j] = '$';
			}
			else if(arr[j]<i)
			{
				brr[10-i][j] = ' ';
			}
		}
	}
 } 
void map(void)//�ͦ��ϫ� 
{
	int i;
	int j;
	int k;
	for(i=0;i<25;i++)
	{
	k=rand()%10+1;
	arr[i]=k;
	//printf("%d\t",arr[i]);
	}
	printf("\n");
	
}
void print(void)//�L�X�ϫ� 
{
	int i;
	int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<25;j++)
		{
			printf("%c",brr[i][j]);
		 }
		 printf("\n"); 
	}
}
int main(void)
{
	srand((unsigned)time(NULL));
	system("color 9");
	while(!kbhit())
	{
		map();
		volume();
		print();
		sleep(1);//����1��
		system("cls"); //��s����
	}
	
 } 


