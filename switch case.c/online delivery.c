#include <stdio.h>
int main() {
int order,speed,cash=0;
scanf("%d %d",&order,&speed);
switch(speed){
    case 1:
    cash=50;
    printf("delivery=%d",cash);
    break;
    case 2:
    if(order<1000){
        cash=100;
        printf("delivery=%d",cash);
    }else
         printf("free");
}
         return 0;
}
        

