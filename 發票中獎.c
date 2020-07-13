#include<stdio.h>
#include<string.h>
void list(void);
int main()
{
	char spe[] = "12620024";
	char ter[] = "39793895";
	char fir1[] = "67913945";
	char fir2[] = "09954061";
	char fir3[] = "54574947";
	char six[] = "007";	
	char arr[8];
	printf("請輸入發票號碼:\n");
	fgets(arr,9,stdin);
	if (strcmp(arr,spe)==0) //特別獎 
        {
           printf("恭喜你中了特別獎1000萬元!\n");
           list();
        }
    else if(strcmp(arr,ter)==0) //特獎 
    {
    	printf("恭喜你中了特獎200萬元!\n");
        list();
	}
	else if(strcmp(arr,fir1)==0) //頭獎1 
    {
    	printf("恭喜你中了頭獎20萬元!\n");
        list();
	}
	else if(strcmp(arr,fir2)==0) //頭獎2 
    {
		printf("恭喜你中了頭獎20萬元!\n");
        list();
	}
	else if(strcmp(arr,fir3)==0) //頭獎3 
    {
    	printf("恭喜你中了頭獎20萬元!\n");
        list();
	}
	else if(strncmp(&arr[1],&fir1[1],7)==0 || strncmp(&arr[1],&fir2[1],7)==0 || strncmp(&arr[1],&fir3[1],7)==0) //二獎 
	{
		printf("恭喜你中了二獎4萬元!\n");
        list();	
	}
	else if(strncmp(&arr[2],&fir1[2],6)==0 || strncmp(&arr[2],&fir2[2],6)==0 || strncmp(&arr[2],&fir3[2],6)==0) //三獎 
	{
		printf("恭喜你中了三獎1萬元!\n");
        list();		
	}
	else if(strncmp(&arr[3],&fir1[3],5)==0 || strncmp(&arr[3],&fir2[3],5)==0 || strncmp(&arr[3],&fir3[3],5)==0) //四獎 
	{
		printf("恭喜你中了四獎4千元!\n");
        list();		
	}
	else if(strncmp(&arr[4],&fir1[4],4)==0 || strncmp(&arr[4],&fir2[4],4)==0 || strncmp(&arr[4],&fir3[4],4)==0) //五獎 
	{
		printf("恭喜你中了五獎1千元!\n");
        list();		
	}
	else if(strncmp(&arr[5],&fir1[5],3)==0 || strncmp(&arr[5],&fir2[5],3)==0 || strncmp(&arr[5],&fir3[5],3)==0) //六獎 
	{
		printf("恭喜你中了六獎2百元!\n");
        list();		
	}
	else if(strncmp(&arr[5],&six[0],3)==0) //增開六獎 
	{
		printf("恭喜你中了增開六獎2百元!\n");
        list();		
	}
	else //沒中獎
	{
		printf("未中獎\n");
		list(); 
	} 
} 

void list(void) //獎項 
{
	printf("--------------------------------\n");
    printf("特別獎12620024  獎金1000萬元!\n");
    printf("特獎39793895 	獎金200萬元!\n");
    printf("頭獎67913945 	獎金20萬元!\n");
    printf("頭獎09954061 	獎金20萬元!\n");
    printf("頭獎54574947 	獎金20萬元!\n");
    printf("二獎:同期統一發票收執聯末7位與頭獎中獎號碼末7位相同者各得獎金4萬元!\n");
    printf("三獎:同期統一發票收執聯末6位與頭獎中獎號碼末6位相同者各得獎金1萬元!\n");
    printf("四獎:同期統一發票收執聯末5位與頭獎中獎號碼末5位相同者各得獎金4千元!\n");
    printf("五獎:同期統一發票收執聯末4位與頭獎中獎號碼末4位相同者各得獎金1千元!\n");
    printf("六獎:同期統一發票收執聯末3位與頭獎中獎號碼末3位相同者各得獎金2百元!\n");
    printf("增開六獎號碼007:同期統一發票收執聯末3位與增開六獎號碼相同者各得獎金2百元!\n");	
}
