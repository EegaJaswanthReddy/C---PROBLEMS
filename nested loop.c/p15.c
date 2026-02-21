#include<stdio.h>
int main(){
     int n;
     scanf("%d",&n);
     for(char i=n;i>64;i--){
       for(char j=65;j<=i;j++){
          printf(" %c",j);
     }
             printf("\n");
     }
     return 0;
}
