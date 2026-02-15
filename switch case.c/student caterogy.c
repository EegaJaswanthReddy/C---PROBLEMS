#include <stdio.h>
int main() {
int student,fee=0;
scanf("%d",&student);
switch(student){
    case 1:
      fee=1200;
      printf("%d",fee);
break;
    case 2:
    fee=800;
    printf("%d",fee);
   break;
   case 3:
   fee=500;
   printf("%d",fee);
break;
default:
printf("invalid");
}
    return 0;
}
    
