#include<stdio.h>
int main(){
    int connection_type,units;
    int bill=0;
    scanf("%d %d",&connection_type,&units);
    switch(connection_type){
      case 1:
      if(units<=100){
        bill=units*3;
      }else{
        bill=(100*3)+(units-100)*5;
      }
      bill-=80;
      if( bill<0){
        bill=0;
      }
      break; 
      case 2:
       if(units<=100){
        bill=units*7;
       }else{
        bill=(100*7)+((units-100)*10);
       }
       break;
       default:
       printf("invalid connection_type");
      }
      printf("bill=%d\n",bill);
      return 0;
    }
 
