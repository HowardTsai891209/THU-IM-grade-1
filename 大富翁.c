#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()//�P�q���i���Y��l ����F���I�̳ӧQ �����N��i���Y��l 
{
	int dice, dice2, ply = 0, cpu = 0;	
	char *loc[] = {
	"�����]", "�F����", "�ū~�p��", "���оǰ|", "���y��", "��|��", "�@�ե���", "�ܺ��I", "�y���]",
	"�@�դp7", "������", "����|", "�Ϯ��]", "��z�j�D", "����q�а�", "�ʽ��", "�G�ձJ��", "�ް|�p7(���I)"};
	do
	{
		srand(time(NULL));
		dice = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		printf("������->�F����->�ū~�p��->���оǰ|->���y��->��|��->�@�ե���->�ܺ��I->�y���]->�@�դp7->\n");
		printf("������->����|->�Ϯ��]->��z�j�D->����q�а�->�ʽ��->�G�ձJ��->�ް|�p7(���I)\n");
		printf("=============================================================================\n");
		printf("���쪱�a�Y��l(�Ы����N��):\n");
		getchar();
		printf("���a��X�F%d\n",dice);
		ply = ply + dice;
		printf("�q����X�F%d\n",dice2);
		cpu = cpu + dice2;
		if(ply >= 18)
		{
			printf("���a���\n");
			return 0;	
		} 
		else if(cpu >= 18)
		{
			printf("�q�����\n");
			return 0;	
		} 
		printf("���a�{�b��m:%s\n",loc[ply]);
		printf("�q���{�b��m:%s\n",loc[cpu]);
		printf("=============================================================================\n");
	} while(1);
}

