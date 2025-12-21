#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=35){
        printf("pass");
    }else if(marks>=30){
       printf("grace pass");
    }else
       printf("fail");
    return 0;
}