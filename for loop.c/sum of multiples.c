#include <stdio.h>

int main() {
    int a, b, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a; i <= b; i += a) {
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
