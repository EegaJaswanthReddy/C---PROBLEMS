#include <stdio.h>
int main(){
int vehicle_c,v_age,insurance;
scanf("%d %d",&vehicle_c,&v_age);
switch(vehicle_c){
    case 1:
    if(v_age>=0&&v_age<=5){
        insurance=1500;
        printf("%d",insurance);
    }else if(v_age>5&&v_age<=20){
        insurance=2500;
        printf("%d",insurance);
    }
    break;
    case 2:
    if(v_age>=0&&v_age<=5){
        insurance=4000;
        printf("%d",insurance);
    }else if(v_age>5&&v_age<=20){
        insurance=6000;
        printf("%d",insurance);
    }
     break;
    default:
      printf("invalid");
}


       return 0;
}
