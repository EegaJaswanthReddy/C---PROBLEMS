#include <stdio.h>
int main() {
   char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z'){
        printf("alphabet");
    }else if(a>='0'&&a<='9'){
       printf("digits");
    }else 
       printf("special character");
    return 0;
}