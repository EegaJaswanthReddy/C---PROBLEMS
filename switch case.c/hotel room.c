#include <stdio.h>
int main() {
int room,cost=0;
char season;
scanf("%d %c",&room,&season);
switch(room){
    case 1:
    if(season=='a'){
        cost=2500;
        printf("cost=%d",cost);
    }else if(season=='b'){
        cost=2000;
        printf("cost=%d",cost);
    }
    break;
    case 2:
    if(season=='c'){
        cost=4000;
        printf("cost=%d",cost);
    }else if(season=='d'){
        cost=3000;
        printf("cost=%d",cost);
    }
}
         return 0;
}
        

