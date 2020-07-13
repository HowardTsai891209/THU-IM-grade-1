#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fun(int,int);
int main()
{
	int max, min, temp;
	printf("請輸入兩個數值(兩數值相減絕對值>=10): \n");
	fflush(stdout);
	scanf("%d %d",&max,&min);
	if(max < min)
		{
			temp = max;
			max = min;
			min = temp;
		}
	if( (max - min) <= 10)
	{
		printf("相減絕對值<10\n");
	}
	else
	{
	fun(max,min);
	}
}

void fun(int max,int min)
{
	srand((unsigned) time(NULL));
	int i, j, used, arr[10];
	for(i = 0;i < 10;i++)
	{
		do
		{
		arr[i] = rand() % (max - min + 1) + min;
		used = 0;
			for(j = 0;j < i;j++)
			{
				if(arr[i] == arr[j])
				{
					used = 1;
					break;
				}
			}
		} while(used == 1);
	printf("%d ", arr[i]);
	}
}
