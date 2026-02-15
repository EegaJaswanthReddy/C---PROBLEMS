#include <stdio.h>

int main() {
    int vehicle, dist, fare;
    scanf("%d %d", &vehicle, &dist);
    switch (vehicle) {
        case 1:
            fare = dist* 10;
            break;
        case 2:
            fare = dist* 15;
            break;
        case 3:
            fare = dist* 20;
            break;
        default:
            fare = 0;
    }
    printf("%d", fare);
    return 0;
}
