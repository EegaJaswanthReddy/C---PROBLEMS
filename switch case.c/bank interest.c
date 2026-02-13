#include <stdio.h>
int main() {
int account,years,interest=0;
scanf("%d %d",&account,&years);
switch(account){
    case 1:
    interest=4;
    printf("interest=%d",interest);
    case 2:
    if(years<=3){
        interest=5;
        printf("interest=%d",interest);
    }else
        interest=7;
        printf("interest=%d",interest);
}
         return 0;
}
        

