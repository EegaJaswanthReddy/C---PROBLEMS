#include<stdio.h>
int main(){
     int cash,n,a,count=0;
     scanf("%d %d",&cash,&n);
     for(int i=0;i<n;i++){
          scanf("%d",&a);
             cash-=a;
          if(cash<5000){
               count++;
          }
     }
     printf("Remaining cash: %d\n",cash);
     printf("risk count: %d",count);
     return 0;
}
