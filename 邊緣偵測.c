#include<stdio.h>
#include<stdlib.h>

int main() //0���I�� 1���ϧ� ��X1�ϧΪ���t 
{
	int N, n, m; //N���X�մ��� �ͦ�nxm���x�}
	int i, j, k = 0;
	int arr[15][15] = {0};
							
	int res[3][15][15] = {0};	
	
	do{
		scanf("%d", &N);
	} while(N <= 0);
	
do
{
	do {
		scanf("%d", &n);
	} while(n < 1);
	
	do {
		scanf("%d", &m);
	} while(m > 100);
	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			if(arr[i][j] == 1){
				if(arr[i][j-1] == 0 || arr[i][j+1] == 0 || arr[i-1][j] == 0 || arr[i+1][j] == 0) {
					res[k][i][j] = 1;//�p�G1�b�̮��� x 
				} else if(arr[i][j-1] == 1 && arr[i][j+1] == 1 && arr[i-1][j] == 1 && arr[i+1][j] == 1) {
					res[k][i][j] = 0;
				}
			}
		}
	}
	
	for(i = 1;i < n;i++){
		for(j = 1;j < m;j++){			
			if(arr[i][j] == 0){
				res[k][i][j] = 2;
			} 
		}
	}
	
	for(i = 0;i < 15;i++){
		for(j = 0;j < 15;j++){
			arr[i][j] = 0;
		}
	}	
	k += 1;
} while(k < N);

	for(k = 0;k < N;k++){
		for(i = 1;i < 15;i++){
			for(j = 1;j < 15;j++){				
				if(res[k][i][j] == 1){
					printf("1 ");
				} else if(res[k][i][j] == 0){
					printf("_ ");
				} else if(res[k][i][j] == 2){
					printf("_ ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
} 
