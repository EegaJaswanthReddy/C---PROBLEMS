#include <stdio.h>
int main() {
    int units;
    scanf("%d",&units);
    if(units<=100&&units>0){
        units=units*1;
        printf("%d",units);
    }else 
        units=units*2;
       printf("%d",units);
    return 0;
}