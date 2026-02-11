#include<stdio.h>
int main(){
    int account_T,bal,W_amount;
    scanf("%d %d %d",&account_T,&bal,&W_amount);
    switch(account_T){
      case 1:
      if(bal>=W_amount){
        printf("withdrawal success");
      }
      else{
        printf("insufficient ");
      }
      break;
      case 2:
      if(W_amount>=5000){
        printf("limit exceed");
      }else if(bal>=W_amount){
        printf("withdrawal ");
      }
      else{
        printf("insufficient successful");
      }
       break;
     
       default:
        printf("invalid account_type");
    }
        return 0;
        }
