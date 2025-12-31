#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (; num != 0; num = num / 10) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }

    if (original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
