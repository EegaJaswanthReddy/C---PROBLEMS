#include <stdio.h>
int main() {
    int class,fee;
    scanf("%d", &class);
    switch (class) {
        case 1:
            fee = 300;
            break;
        case 2:
            fee = 800;
            break;
        case 3:
            fee = 1500;
            break;
        default:
            fee = 0;
    }
    printf("%d", fee);
    return 0;
}
