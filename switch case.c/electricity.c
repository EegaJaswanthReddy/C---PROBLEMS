#include <stdio.h>

int main() {
    int Days, fine;
    scanf("%d", &Days);
    switch (Days <= 5 ? 1 : (Days <= 10 ? 2 : 3)) {
        case 1:
            fine = Days * 50;
            break;
        case 2:
            fine = Days * 100;
            break;
        case 3:
            fine = Days * 200;
            break;
    }
    printf("%d", fine);
    return 0;
}
