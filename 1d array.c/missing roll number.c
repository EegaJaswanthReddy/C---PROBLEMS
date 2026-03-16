#include <stdio.h>
int main() {
    int n, i, num;
    int expected_sum, actual_sum = 0, missing;
    scanf("%d", &n);
    expected_sum = n * (n + 1) / 2;
    printf("%d", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        actual_sum += num;
    }
    missing = expected_sum - actual_sum;
    printf("%d", missing);
    return 0;
}
    
