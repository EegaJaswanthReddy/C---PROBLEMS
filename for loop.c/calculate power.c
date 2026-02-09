#include <stdio.h>

int main() {
    int N, P;
    long long result = 1;
    scanf("%d", &N);
    scanf("%d", &P);
    for (int i = 1; i <= P; i++) {
        result = result * N;
    }
    printf("%d raised to the power %d is %lld\n", N, P, result);

    return 0;
}
