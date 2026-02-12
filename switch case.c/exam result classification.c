#include <stdio.h>
int main() {
int m,a;
scanf("%d %d",&m,&a);
if(a<75){
    printf("fail");
}else if(m>=75){
    printf("distinction");
}else if(m>=50){
    printf("pass");
}else
    printf("fail");

    return 0;
}
