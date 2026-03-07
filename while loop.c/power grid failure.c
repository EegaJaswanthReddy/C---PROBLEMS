#include <stdio.h>
int main() {
    int capacity, n;
    scanf("%d", &capacity);
    scanf("%d", &n);
    int load[n];
    int i = 0;
    int safeHours = 0, failureCount = 0
    while(i < n) {
        scanf("%d", &load[i]);
        i++;
    }
    i = 0;
    while(i < n) {
        if(load[i] > capacity) {
            failureCount++;
        } else {
            safeHours++;
        }
        i++;
    }
    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);
    return 0;
}
