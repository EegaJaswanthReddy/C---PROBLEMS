#include <stdio.h>

int main() {
    int i, sum = 0, digit;
    scanf("%d", &n);
    for (; i != 0; i = i / 10) {
        digit = i % 10;
        sum = sum + digit;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
