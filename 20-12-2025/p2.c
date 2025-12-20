#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b&&a>c){
       printf("a is largest=%d",a);
    }else if(b>a&&b>c){
       printf("b is largest=%d",b);
    }else
       printf("c is greater=%d",c);

    return 0;
}