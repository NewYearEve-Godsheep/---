#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=1,n;
    srand(time(0));
    int j=rand()%100;
	j=20;
    printf("********������Ϸ�������������Ҫ��100����********\n");
    do
    {
        scanf("%d",&n);
        getchar();
        if(n>=100||n<0)
         {   printf("����������ֲ�������Ϸ����!����������!\n");
            continue;
          }
        if(i !=20)
        {
            if(n>j)
              printf("���������ƫ�����ٴ�����\n");
            else if(n<j)
              printf("���������ƫС�����ٴ�����\n");
            else if(n==j)    
            {
               printf("��ϲ�����¶��ˣ����˴���Ϸ������%d�Ρ�",i); 
               break;
            } 
         }
         else if(i==20)
         {  if(n==j)
            printf("��ϲ�����¶��ˣ����˴���Ϸ������%d�Ρ�",i);
            else 
            printf("���ź�����Ϸ��������û�в¶�!");
         }
     getchar();
     i++;  
    }while(i<=20);
	getchar();
    return(0);
}
