#include <stdio.h>

int main()
{
    int N, K, result;

    scanf("%d", &N);
    scanf("%d", &K);

    result = N ^ (1 << K);

    printf("%d", result);

    return 0;
}
