#include <stdio.h>
int main(){
int code,exper,salary=0;
scanf("%d %d",&code,&exper);
switch(code){
    case 1:
    salary=50000;
    if(exper>=3){
        printf("salary=%d",salary+5*5000);
    }
    break;
    case 2:
       salary=35000;
       if(exper>=3){
        printf("salary=%d",salary+5*5000);
}

    default:
      printf("invalid");
}
       return 0;
}
