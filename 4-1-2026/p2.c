#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[10];
    char num[10];
    scanf("%d", &n);
    scanf("%s", num);
    for(i = 0; i < n; i++) {
        arr[i] = num[i] - '0'; 
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}
