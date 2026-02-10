#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    scanf("%d", &n);

    temp = n;

    for (; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += digit * digit * digit;
    }

    if (sum == n)
        printf("%d", n);
    else
        printf("%d ", n);

    return 0;
}
