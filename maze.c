#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int arr[10][10]={				//在固定的迷宮道路中 隨機生成一個* 以數字2代替 
	{1,1,1,1,1,0,0,0,0,1},		//生成一個迷宮 1為牆壁 0為道路
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
void print(void)//印出迷宮 
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
	while(!kbhit())//kbhit()是否有按鍵被按下
	{
		int x;
		int y;
		do							//隨機生成 
		{
			x=rand()%10;
			y=rand()%10;
			arr[x][y];
		}while(arr[x][y]==1);		//檢測是否為道路	
		arr[x][y]=2;
		print();
		arr[x][y]=0;
		sleep(1);//等待1秒
		system("cls"); //刷新頁面
	}
}


