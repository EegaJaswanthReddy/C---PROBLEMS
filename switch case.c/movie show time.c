#include <stdio.h>
int main() {
int seat,show,price=0;
scanf("%d %d",&seat,&show);
switch(seat){
    case 1:
    if(show>=1&&show<18){
        price=150;
        printf("%d",price);
    }else if(show>=18&&show<=24){
        price=150+50;
        printf("%d",price);
    }
    break;
    case 2:
     if(show>=1&&show<=18){
        price=250;
        printf("%d",price);
    }else if(show>=18&&show<=24){
        price=250+50;
        printf("%d",price);
    }
    break;
   
    default:
        printf("invalid");    
}
    return 0;
}
