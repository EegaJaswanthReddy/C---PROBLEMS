#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int div = a;
    int mod = a;
    div /= b; 
    mod %= b;  


    printf("%d %d", div, mod);

    return 0;
}
