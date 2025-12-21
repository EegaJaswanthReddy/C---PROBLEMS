#include <stdio.h>
int main() {
    int m;
      printf("marks=");
      scanf("%d",&m);
    if(m>=95){
      printf("A grade");
    }else if(m>=75){
      printf("B grade");
    }else if(m>=50){
      printf("C grade");
    }else 
      printf("fail");
    
    return 0;
}