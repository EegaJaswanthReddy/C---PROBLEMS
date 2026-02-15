#include <stdio.h>
int main() {
    int duration, fee;
    scanf("%d", &duration);
    switch (duration) {
        case 1:
            fee = 1500;
            break;
        case 2:
            fee = 4000;
            break;
        case 3:
            fee = 7000;
            break;
        default:
            fee = 0;
    }
    printf("%d", fee);
    return 0;
}
