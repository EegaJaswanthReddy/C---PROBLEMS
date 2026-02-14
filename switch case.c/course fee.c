#include <stdio.h>
int main() {
   int c_mode,fee=0;
   char student_c;
   scanf("%d %c",&c_mode,&student_c);
   switch(c_mode){
    case 1:
    fee=5000;
    if(student_c=='R'){
        printf("%d",fee);
    }else if(student_c=='S'){
        fee=3000;
        printf("%d",fee);
    }
    break;
    case 2:
    if(student_c=='R'){
        fee=9000;
        printf("%d",fee);
    }else if(student_c){
        fee=7000;
        printf("%d",fee);
    }
   }
    return 0;
}
