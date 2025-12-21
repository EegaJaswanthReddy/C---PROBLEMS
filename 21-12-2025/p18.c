#include <stdio.h>
int main() {
    int SP,CP;
    scanf("%d\n%d",&SP,&CP);
    if(SP>CP){
        printf("profit");
    }else 
       printf("loss");
    return 0;
}