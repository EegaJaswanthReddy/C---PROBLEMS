#include <stdio.h>
int main() {
   int f_class,ebw,ebc,charge=0;
   scanf("%d %d",&f_class,&ebw);
   switch(f_class){
    case 1:
    charge=300;
    if(ebw>=1&&ebw<=20){
        ebc=ebw*charge;
        printf("%d",ebc);
    }
    break;
    case 2:
    if(ebw>=1&&ebw<=3){
        printf("free");
    }else if(ebw>3&&ebw<=20){
        charge=300;
        ebw=ebw-3;
        ebc=ebw*charge;
        printf("%d",ebc);
    }
   }
    return 0;
}
