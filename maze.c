#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int arr[10][10]={				//�b�T�w���g�c�D���� �H���ͦ��@��* �H�Ʀr2�N�� 
	{1,1,1,1,1,0,0,0,0,1},		//�ͦ��@�Ӱg�c 1����� 0���D��
	{0,0,0,0,1,0,0,0,0,1},
	{0,0,0,0,1,0,0,0,0,1},
	{0,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,1,0,0,0,0,0},
    {1,0,0,0,1,0,0,0,0,0},
    {1,0,0,0,1,0,0,0,0,0},
    {1,0,0,0,1,0,0,0,0,0},
    {1,0,0,0,1,1,1,1,1,1},
	};
void print(void)//�L�X�g�c 
{
	int i;
		int j;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
}
int main()
{
	srand((unsigned)time(NULL));
	while(!kbhit())//kbhit()�O�_������Q���U
	{
		int x;
		int y;
		do							//�H���ͦ� 
		{
			x=rand()%10;
			y=rand()%10;
			arr[x][y];
		}while(arr[x][y]==1);		//�˴��O�_���D��	
		arr[x][y]=2;
		print();
		arr[x][y]=0;
		sleep(1);//����1��
		system("cls"); //��s����
	}
}
//487548


