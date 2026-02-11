#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a > 3)
        printf("Account Locked");
    else
        printf("Login Allowed");

    return 0;
}
