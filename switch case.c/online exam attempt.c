#include <stdio.h>
int main() {
int attempt_no,m;
scanf("%d %d",&attempt_no,&m);
switch(attempt_no){
    case 1:
    if(m>=80&&m<=100){
        printf("excellent");
    }else
        printf("no qualified");
break;
    case 2:
     if(m>=60&&m<=79){
        printf("good");
    }else
        printf("no qualified");
break;
    case 3:
        if(m>=0&&m<=59){
        printf("need improvement");
    }
     break;
    default:
        printf("invalid");    
}
    return 0;
}
