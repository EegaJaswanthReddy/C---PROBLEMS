#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if (a>=5000){
    int b=(a/100)*10;
    a=a-b;
    printf("a:%d",a);}
    else{
 int b=(a/100)*5; 
 a=a-b;
    printf("a:%d",a);}
    return 0;
}