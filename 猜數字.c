#include<stdio.h>  
  
int main()  
{  
    int guess[4], answer[4] = {4, 8, 0, 1};  
    int g0, g1, g2, g3, i, k, A = 0, B = 0;   
      
    do  
    {     
        scanf("%d %d %d %d", &g0, &g1, &g2, &g3);  
        guess[0] = g0;  
        guess[1] = g1;  
        guess[2] = g2;  
        guess[3] = g3;  
        if(4 == g0 && 8 == g1 && 0 == g2 && 1 == g3)  
        {  
            printf("4A0B\n");  
            return 0;  
        }  
        if(g0 == 0 && g1 == 0 && g2 == 0 && g3 == 0)  
        {  
            return 0;  
        }  
        else  
        {             
            for(i = 0;i < 4;i++)  
            {  
                if(answer[i] == guess[i])  
                {     
                    A += 1;  
                }  
                for(k = 0; k < 4;k++)  
                {  
                    if(answer[i] == guess[k])  
                    {  
                        if(answer[i] == guess[i])  
                        {     
                            B -= 1;  
                        }  
                        B += 1;  
                    }  
                }  
            }                 
            printf("%dA%dB\n", A, B);  
            A = 0;  
            B = 0;        
        }         
    } while (1);  
}  
