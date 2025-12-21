#include <stdio.h>
int main() {
    int password;
    scanf("%d",&password);
    if(password==1234){
        printf("access granted");
    }else 
       printf("denied");
    return 0;
}