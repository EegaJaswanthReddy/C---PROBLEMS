#include <stdio.h>
int main() {
    int doctor, fee;
    scanf("%d", &doctor);
    switch (doctor) {
        case 1:
            fee = 500;
            break;
        case 2:
            fee = 1200;
            break;
        default:
            fee = 0;
    }
    printf("%d", fee);
    return 0;
}
