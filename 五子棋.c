#include<stdio.h>
#include<stdlib.h>
void print(void);  
void chess(int ,int, char); 
void winner(void);
char a[11][11] = {0}; 
int x, y, k = 0; 
int i, j; 
int main()
{	
	print();
		do
		{
			if(k % 2 == 0)
			{
				printf("B's turn\n");
				fflush(stdout);
				scanf("%d,%d",&x,&y);
				chess(x+1,y+1,'B');
				winner();
			}
			else if(k % 2 == 1)
			{
				printf("W's turn\n");
				fflush(stdout);
				scanf("%d,%d",&x,&y);
				chess(x+1,y+1,'W');
				winner();
			}
		k +=1;
		} while(1);	
} 

void chess(int x, int y,char C)	//若位置為空的則下棋 否則重選一次 
{
	if(a[y][x] != 0)  
	{
		printf("not empty, please retry\n");
		do
		{
			if(k % 2 == 0)
			{
				printf("B's turn\n");
				fflush(stdout);
				scanf("%d,%d",&x,&y);
				chess(x+1,y+1,'B');
				winner();
			}
			else if(k % 2 == 1)
			{
				printf("W's turn\n");
				fflush(stdout);
				scanf("%d,%d",&x,&y);
				chess(x+1,y+1,'W');
				winner();
			}
		k +=1;
		} while(1);	
	}	
	a[y][x] = C;
	print();
}

void print(void)	//印出當前棋盤 
{
	for(i = 1;i < 11;i++)
	{
		a[0][i] = '0'+i-1;
	}
	for(j = 1;j < 11;j++)
	{
		a[j][0] = '0'+j-1;
	}
	for(j = 0;j < 11;j++)
	{
		for(i = 0;i < 11;i++)
		{
			printf("%c",a[j][i]);
		}
	printf("\n");
	}
}

void winner(void)	//找出勝方 
{
	int o, p;
	for(o = 1;o < 11;o++)	//從行中 找連線 
	{
		for(p = 1;p < 11;p++)
		{
			if(a[o][p] == 'B' && a[o][p+1] == 'B' && a[o][p+2] == 'B' && a[o][p+3] == 'B' && a[o][p+4] == 'B'){
				printf("B is winner");
				exit(1);
			}
			else if(a[o][p] == 'w' && a[o][p+1] == 'w' && a[o][p+2] == 'w' && a[o][p+3] == 'w' && a[o][p+4] == 'w'){
				printf("W is winner");
				exit(1);
			}		
		}
	}	
	
	for(o = 1;o < 11;o++)	//從列中 找連線 
	{
		for(p = 1;p < 11;p++)
		{
			if(a[o][p] == 'B' && a[o+1][p] == 'B' && a[o+2][p] == 'B' && a[o+3][p] == 'B' && a[o+4][p] == 'B')	{
				printf("B is winner");
				exit(1);
			}
			else if(a[o][p] == 'W' && a[o+1][p] == 'W' && a[o+2][p] == 'W' && a[o+3][p] == 'W' && a[o+4][p] == 'W'){
				printf("W is winner");
				exit(1);
			}		
		}
	}
	
	for(o = 1;o < 11;o++)	//往右下 找連線 
	{
		for(p = 1;p < 11;p++)
		{
			if(a[o][p] == 'B' && a[o+1][p+1] == 'B' && a[o+2][p+2] == 'B' && a[o+3][p+3] == 'B' && a[o+4][p+4] == 'B')	{
				printf("B is winner");
				exit(1);
			}
			else if(a[o][p] == 'W' && a[o+1][p+1] == 'W' && a[o+2][p+2] == 'W' && a[o+3][p+3] == 'W' && a[o+4][p+4] == 'W'){
				printf("W is winner");
				exit(1);
			}		
		}
	}
	
	for(o = 1;o < 11;o++)	//往左下找連線 
	{
		for(p = 1;p < 11;p++)
		{
			if(a[o][p] == 'B' && a[o-1][p+1] == 'B' && a[o-2][p+2] == 'B' && a[o-3][p+3] == 'B' && a[o-4][p+4] == 'B')	{
				printf("B is winner");
				exit(1);
			}
			else if(a[o][p] == 'W' && a[o-1][p+1] == 'W' && a[o-2][p+2] == 'W' && a[o-3][p+3] == 'W' && a[o-4][p+4] == 'W'){
				printf("W is winner");
				exit(1);
			}		
		}
	}
}
