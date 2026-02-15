#include <stdio.h>

int main() {
    int delivery, charge;
    scanf("%d", &delivery);
    switch (delivery) {
        case 1:
            charge = 40;
            break;
        case 2:
            charge = 120;
            break;
        case 3:
            charge = 0;
            break;
        default:
            charge = 0;
    }
    printf("%d", charge);
    return 0;
}
