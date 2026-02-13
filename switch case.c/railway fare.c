#include <stdio.h>
int main() {
int class,age,fare=0;
scanf("%d %d",&class,&age);
switch(class){
    case 1:
    fare=300;
    if(age<12){
        fare=fare/2;
        printf("%d",fare);
    }else if(age>=60){
        fare=fare-(fare/3);
        printf("%d",fare);
    }
    case 2:
    fare=1000;
    if(age<12){
        fare=fare/3;
        printf("%d",fare);
    }
    
}
return 0;
}
