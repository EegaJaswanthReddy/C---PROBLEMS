#include <stdio.h>

int main() {
    int sal;
    scanf("%d", &sal);
    if (sal > 30000) {
        printf("Bonus Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}
