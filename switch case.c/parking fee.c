#include <stdio.h>
int main(){
int vehicle_t,no_hours,p_fee,charge;
scanf("%d %d",&vehicle_t,&no_hours);
switch(vehicle_t){
    case 1:
    if(no_hours>=1&&no_hours<=24){
        charge=10;
        p_fee=no_hours*charge;
        printf("%d",p_fee);
    }
    break;
    case 2:
    if(no_hours>=1&&no_hours<=24){
        charge=20;
        p_fee=no_hours*charge;
        printf("%d",p_fee);
    }
     break;
    default:
        charge=20;
         p_fee=no_hours*charge;
        printf("%d",p_fee);
    
 }

       return 0;
}
