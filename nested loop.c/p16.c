#include<stdio.h>
int main(){
     int n;
     scanf("%d",&n);
     for(char i=64;i<=n;i++){
       for(char j=65;j<i+1;j++){
          printf(" %c",i);
     }
             printf("\n");
     }
     return 0;
}
