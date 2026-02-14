#include <stdio.h>
int main() {
int category,dist;
scanf("%d %d",&category,&dist);
switch(category){
    case 1:
    if(dist>=1&&dist<=30){
        printf("eligible");
    }else if(dist>30&&dist<=100){
        printf("eligible with extra fee");
    }
break;
    case 2:
     if(dist>=1&&dist<=30){
        printf("eligible");
    }else if(dist>30&&dist<=100){
        printf("not eligible");
    }
break;
   
    default:
        printf("invalid");    
}
    return 0;
}
