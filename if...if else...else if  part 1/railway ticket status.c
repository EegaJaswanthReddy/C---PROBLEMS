#include <stdio.h>
int main() {
int seat;
scanf("%d",&seat);
if(seat>0){
    printf("comfirmed");
}else if(seat==0){
  printf("waiting list");
}else
printf("not availability");

    return 0;
}
