#include <stdio.h>
int main(){
int vehicle,trips,cost=0;
scanf("%d %d",&vehicle,&trips);
switch(vehicle){
    case 1:
    if(trips=1){
      cost=100;
        printf("%d",cost);
    }else if(trips>=2){
        cost=800;
        printf("%d",cost);
    break;
    case 2:
        cost=240;
        printf("%d",trips*cost);
     break;
    default:
      printf("invalid");
}
}
       return 0;
}
