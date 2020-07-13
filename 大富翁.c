#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()//與電腦進行擲骰子 先到達終點者勝利 按任意鍵進行擲骰子 
{
	int dice, dice2, ply = 0, cpu = 0;	
	char *loc[] = {
	"音美館", "東海湖", "乳品小站", "雲創學院", "網球場", "體育室", "一校正門", "萊爾富", "語文館",
	"一校小7", "中正堂", "社科院", "圖書館", "文理大道", "路思義教堂", "銘賢堂", "二校宿舍", "管院小7(終點)"};
	do
	{
		srand(time(NULL));
		dice = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		printf("音美管->東海湖->乳品小站->雲創學院->網球場->體育室->一校正門->萊爾富->語文館->一校小7->\n");
		printf("中正堂->社科院->圖書館->文理大道->路思義教堂->銘賢堂->二校宿舍->管院小7(終點)\n");
		printf("=============================================================================\n");
		printf("輪到玩家擲骰子(請按任意鍵):\n");
		getchar();
		printf("玩家骰出了%d\n",dice);
		ply = ply + dice;
		printf("電腦骰出了%d\n",dice2);
		cpu = cpu + dice2;
		if(ply >= 18)
		{
			printf("玩家獲勝\n");
			return 0;	
		} 
		else if(cpu >= 18)
		{
			printf("電腦獲勝\n");
			return 0;	
		} 
		printf("玩家現在位置:%s\n",loc[ply]);
		printf("電腦現在位置:%s\n",loc[cpu]);
		printf("=============================================================================\n");
	} while(1);
}

