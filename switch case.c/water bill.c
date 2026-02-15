#include <stdio.h>
int main() {
int connection,units,bill=0;
scanf("%d %d",&connection,&units);
switch(connection){
    case 1:
    if(units>=1&&units<=30){
        bill=units*5;
        printf("%d",bill);
    }else if(units>30){
        bill=units*8;
        printf("%d",bill);
    }
    break;
    case 2:
     if(units>0){
        bill=units*10;
        printf("%d",bill);
    }
    break;
    default:
        printf("invalid");    
}
    return 0;
}
