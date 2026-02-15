#include <stdio.h>

int main() {
    int customer,bill;
    float discount = 0,final;
    scanf("%d %d",&customer,&bill);

    switch(customer) {
        case 1:
            discount = 0.05 * bill; 
            break;
        case 2:
            discount =  0.15* bill; 
            break;
        default:
            discount = 0; 
    }

    final = bill - discount;

    printf("%.f",final);

    return 0;
}
