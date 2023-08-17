#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=1,n;
    srand(time(0));
    int j=rand()%100;
	j=20;
    printf("********猜数游戏，请猜数，数字要求100以内********\n");
    do
    {
        scanf("%d",&n);
        getchar();
        if(n>=100||n<0)
         {   printf("你输入的数字不符合游戏规则!请重新输入!\n");
            continue;
          }
        if(i !=20)
        {
            if(n>j)
              printf("输入的数字偏大，请再次输入\n");
            else if(n<j)
              printf("输入的数字偏小，请再次输入\n");
            else if(n==j)    
            {
               printf("恭喜您，猜对了，您此次游戏共猜了%d次。",i); 
               break;
            } 
         }
         else if(i==20)
         {  if(n==j)
            printf("恭喜您，猜对了，您此次游戏共猜了%d次。",i);
            else 
            printf("很遗憾，游戏结束，你没有猜对!");
         }
     getchar();
     i++;  
    }while(i<=20);
	getchar();
    return(0);
}
