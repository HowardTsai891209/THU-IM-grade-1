#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x, y, n;
int q = 0, t;
int win = 0;
int arr[100][100] = {0};	//�����ͦ��󤤥��æb���������� �C�����W�U���k�䤤�@�Ӥ�V����
void city(int);				//�Y������� �h��k�X; �Y�W�U���k�w�L���i�� �h�⥢��
int dir(int);				//�p��k�X���\�v
void result(void);
int main()					//��J����ƶq & �����j�p 
{							 
	int i, j;				 
	printf("���զ���:\n");	 
	scanf("%d",&t);
	printf("�����j�p:\n");
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
	printf("�s���v��%d%%",(int)(((float)win/t)*100));
} 
void result(void)//�k�� 
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
	} while(p == 0);				//���s���� 
	for(i = 0;i < 100;i++){
			for(j = 0;j < 100;j++){
				arr[i][j] = 0;
			}
		}
}
void city(int n)//�L�X�C�@�������G 
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
	if(d == 1){ //�V�k 	
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("���`\n");
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
	} else if (d == 2){ //�V�� 		
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
			city(n);
			printf("���`\n");
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
	} else if (d == 3){ //�V�U 	
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("���`\n");
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
	} else if (d == 4){ //�V�W 		
		if(arr[y][x+1] == 1 && arr[y][x-1] == 1 && arr[y+1][x] == 1 && arr[y-1][x] == 1){
		city(n);
		printf("���`\n");
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
