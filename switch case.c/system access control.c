#include <stdio.h>
int main() {
int userrole,logintime;
scanf("%d %d",&userrole,&logintime);
switch(userrole){
    case 1:
    if(logintime>=1&&logintime<=24){
        printf("full acess anytime");
    }
    break;
    case 2:
     if(logintime>=9&&logintime<=18){
        printf("limited access");
    }else
        printf("access denied");
    
break;
   
    default:
        printf("invalid");    
}
    return 0;
}
