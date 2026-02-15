#include <stdio.h>
int main() {
    int distance, fee;
    scanf("%d", &distance);
    switch (distance) {
        case 1:
            fee = 800;
            break;
        case 2:
            fee = 1200;
            break;
        case 3:
            fee = 1800;
            break;
        default:
            fee = 0;
    }
    printf("%d", fee);
    return 0;
}
