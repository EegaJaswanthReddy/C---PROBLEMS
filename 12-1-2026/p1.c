#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum = 0;
    char result[20];

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        strcpy(result, "Perfect");
    else
        strcpy(result, "Not Perfect");

    printf("%s", result);

    return 0;
}
