#include <stdio.h>

int main() {
    int i,rev = 0,digit;
    scanf("%d", &i);

    for (; i!= 0;i = i/ 10) {
        digit = i % 10;
        rev = rev * 10 + digit;
    }

    printf("Reversed number: %d", rev);

    return 0;
}
