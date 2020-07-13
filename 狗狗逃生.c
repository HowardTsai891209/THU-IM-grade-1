#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x, y, n;
int q = 0, t;
int win = 0;
int arr[100][100] = {0};	//狗狗生成於中央並在城市中走動 每次往上下左右其中一個方向移動
void city(int);				//若走到邊界 則算逃出; 若上下左右已無路可走 則算失敗
int dir(int);				//計算逃出成功率
void result(void);
int main()					//輸入測資數量 & 城市大小 
{							 
	int i, j;				 
	printf("測試次數:\n");	 
	scanf("%d",&t);
	printf("城市大小:\n");
	scanf("%d",&n);
	srand(time(NULL));
	while(q < t){
	q+=1;
	result();
		for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}	
	}
	printf("存活率為%d%%",(int)(((float)win/t)*100));
} 
void result(void)//逃走 
{
	int i, j, p = 0;
	x = n/2;
	y = n/2;
	do
	{	
	dir(rand() % 4 + 1);	
	for(i = 0;i < n;i++){
		if(arr[0][i] == 1){
			city(n);
			win = win + 1;
			p = 1;
			break;
		} else if(arr[n-1][i] == 1){
			city(n);
			win = win + 1;
			p = 1;
			break;
		}
	}
	for(j = 0;j < n;j++){
		if(arr[j][0] == 1){
			city(n);
			win = win + 1;
			p = 1;
			break;
		} else if(arr[j][n-1] == 1){
			city(n);
			win = win + 1;
			p = 1;
			break;
		}
	}	 
	} while(p == 0);				//重製城市 
	for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}
}
void city(int n)//印出每一次的結果 
{
	int i, j;	
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
		arr[n/2][n/2] = 1;
	}
	printf("\n");
}
int dir(int d)
{
	int i, j;
	if(d == 1){ //向右 	
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("死亡\n");
			for(i = 0;i < 100;i++){
				for(j = 0;j < 100;j++){
				arr[i][j] = 0;
				}
			}
		q+=1;		
		} else if(arr[y][x+1] == 1){
			dir(rand() % 4 + 1);
		} else {
		x = x + 1;		
		arr[y][x] = 1;
		}
	} else if (d == 2){ //向左 		
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
			city(n);
			printf("死亡\n");
		for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}
		q+=1;
		}else if(arr[y][x-1] == 1){
			dir(rand() % 4 + 1);
		} else {
		x = x - 1;
		arr[y][x] = 1;
		}
	} else if (d == 3){ //向下 	
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("死亡\n");
		for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}	
		q+=1;
		} else if(arr[y-1][x] == 1){
			dir(rand() % 4 + 1);
		} else {
		y = y - 1;
		arr[y][x] = 1;
		}
	} else if (d == 4){ //向上 		
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("死亡\n");
		for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}	
		q+=1;
		} else if(arr[y+1][x] == 1){
			dir(rand() % 4 + 1);
		} else {
		y = y + 1;
		arr[y][x] = 1;
		}
	} 
}
