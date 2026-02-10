#include <stdio.h>

int main() {
    int n, original, rev = 0;
    scanf("%d", &n);
    original = n;
    for (; n > 0; n = n / 10) {
        rev = rev* 10 + (n % 10);
    }
    if (original == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
