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
	printf("�п�J�o�����X:\n");
	fgets(arr,9,stdin);
	if (strcmp(arr,spe)==0) //�S�O�� 
        {
           printf("���ߧA���F�S�O��1000�U��!\n");
           list();
        }
    else if(strcmp(arr,ter)==0) //�S�� 
    {
    	printf("���ߧA���F�S��200�U��!\n");
        list();
	}
	else if(strcmp(arr,fir1)==0) //�Y��1 
    {
    	printf("���ߧA���F�Y��20�U��!\n");
        list();
	}
	else if(strcmp(arr,fir2)==0) //�Y��2 
    {
		printf("���ߧA���F�Y��20�U��!\n");
        list();
	}
	else if(strcmp(arr,fir3)==0) //�Y��3 
    {
    	printf("���ߧA���F�Y��20�U��!\n");
        list();
	}
	else if(strncmp(&arr[1],&fir1[1],7)==0 || strncmp(&arr[1],&fir2[1],7)==0 || strncmp(&arr[1],&fir3[1],7)==0) //�G�� 
	{
		printf("���ߧA���F�G��4�U��!\n");
        list();	
	}
	else if(strncmp(&arr[2],&fir1[2],6)==0 || strncmp(&arr[2],&fir2[2],6)==0 || strncmp(&arr[2],&fir3[2],6)==0) //�T�� 
	{
		printf("���ߧA���F�T��1�U��!\n");
        list();		
	}
	else if(strncmp(&arr[3],&fir1[3],5)==0 || strncmp(&arr[3],&fir2[3],5)==0 || strncmp(&arr[3],&fir3[3],5)==0) //�|�� 
	{
		printf("���ߧA���F�|��4�d��!\n");
        list();		
	}
	else if(strncmp(&arr[4],&fir1[4],4)==0 || strncmp(&arr[4],&fir2[4],4)==0 || strncmp(&arr[4],&fir3[4],4)==0) //���� 
	{
		printf("���ߧA���F����1�d��!\n");
        list();		
	}
	else if(strncmp(&arr[5],&fir1[5],3)==0 || strncmp(&arr[5],&fir2[5],3)==0 || strncmp(&arr[5],&fir3[5],3)==0) //���� 
	{
		printf("���ߧA���F����2�ʤ�!\n");
        list();		
	}
	else if(strncmp(&arr[5],&six[0],3)==0) //�W�}���� 
	{
		printf("���ߧA���F�W�}����2�ʤ�!\n");
        list();		
	}
	else //�S����
	{
		printf("������\n");
		list(); 
	} 
} 

void list(void) //���� 
{
	printf("--------------------------------\n");
    printf("�S�O��12620024  ����1000�U��!\n");
    printf("�S��39793895 	����200�U��!\n");
    printf("�Y��67913945 	����20�U��!\n");
    printf("�Y��09954061 	����20�U��!\n");
    printf("�Y��54574947 	����20�U��!\n");
    printf("�G��:�P���Τ@�o�������p��7��P�Y���������X��7��ۦP�̦U�o����4�U��!\n");
    printf("�T��:�P���Τ@�o�������p��6��P�Y���������X��6��ۦP�̦U�o����1�U��!\n");
    printf("�|��:�P���Τ@�o�������p��5��P�Y���������X��5��ۦP�̦U�o����4�d��!\n");
    printf("����:�P���Τ@�o�������p��4��P�Y���������X��4��ۦP�̦U�o����1�d��!\n");
    printf("����:�P���Τ@�o�������p��3��P�Y���������X��3��ۦP�̦U�o����2�ʤ�!\n");
    printf("�W�}�������X007:�P���Τ@�o�������p��3��P�W�}�������X�ۦP�̦U�o����2�ʤ�!\n");	
}
