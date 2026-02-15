#include <stdio.h>
int main() {
    int fuel,litres,cost;
    scanf("%d %d",&fuel,&litres);
    switch (fuelType) {
        case 1:
            cost = litres * 105;
            break;
        case 2:
            cost = litres * 92;
            break;
        case 3:
            cost = litres * 85;
            break;
        default:
            cost = 0;
    }
    printf("%d", cost);
    return 0;
}
