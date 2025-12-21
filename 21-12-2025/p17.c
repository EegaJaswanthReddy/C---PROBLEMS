#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b+c==180){
        printf("valid it is a triangle");
    }else 
       printf("not valid");
    return 0;
}