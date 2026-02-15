#include <stdio.h>
int main() {
int call,min,charge;
scanf("%d %d",&call,&min);
switch(call){
    case 1:
    if(min>0){
        charge=min*1;
        printf("%d",charge);
    }
    break;
    case 2:
     if(min>0){
        charge=min*3;
        printf("%d",charge);
    }
    break;
    case 3:
    if(min>0){
        charge=min*10;
        printf("%d",charge);
    }
    break;
    default:
        printf("invalid");    
}
    return 0;
}
