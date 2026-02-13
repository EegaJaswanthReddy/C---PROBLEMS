#include <stdio.h>
int main() {
    int plan,payment_M,plan_c= 0,cash = 0;
    scanf("%d %d",&plan, &payment_M);
     switch(plan) {
     case 1: 
     plan_c = 199;
      switch(payment_M) {
     case 11:
     case 12:
        cash= 20;
        break;
     case 13:
        cash= 0;
        break;
     default:
       printf("Invalid\n");
      return 0;
  }
   break;
     case 2:
  plan_c = 399;
    switch(payment_M) {
        case 11:
        case 12:
        cash= 20;
  break;
        case 13:
        cash= 0;
  break;
    default:
    printf("Invalid\n");
    return 0;
 }
    break;
    default:
    printf("Invalid\n");
    return 0;
    }
    printf("Pay= %d\n", plan_c- cash);

    return 0;
}
