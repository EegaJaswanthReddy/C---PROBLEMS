#include <stdio.h>

int main() {
    int amt;
    scanf("%d", &amt);
    if (amt >= 1000) {
        printf("Discount Applied");
    } else {
        printf("No Discount");
    }

    return 0;
}
