#include <stdio.h>
int main(){
int plan;
float data_u;
scanf("%d %f",&plan,&data_u);
switch(plan){
    case 1:
    if(data_u<=1.0){
        printf("normal speed");
    }else 
        printf("speed reduced");
    break;
    case 2:
       if(data_u<=2.0){
        printf("normal speed");
   }else
        printf("extra charges applied");
      
     break;
    default:
      printf("invalid");
}
       return 0;
}
