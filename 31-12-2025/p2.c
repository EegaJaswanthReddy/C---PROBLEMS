#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num = num / 10) {
        reverse = reverse * 10 + (num % 10);
    }

    printf("Reversed number: %d", reverse);

    return 0;
}
