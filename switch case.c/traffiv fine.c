#include <stdio.h>
int main() {
    int violation, fine;
    scanf("%d", &violation);
    switch (violation) {
        case 1:
            fine = 1000;
            break;
        case 2:
            fine = 1500;
            break;
        case 3:
            fine = 2000;
            break;
        default:
            fine = 0;
    }
    printf("%d", fine);
    return 0;
}
