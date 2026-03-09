#include <stdio.h>

int main() {
    int n, i = 0,attempt,totalFailed = 0,consecutiveFailed = 0,lockAttempt = -1;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &attempt);
        if(attempt == 0) {
            totalFailed++;
            consecutiveFailed++;
        } else {
            consecutiveFailed = 0;
        }
        if(consecutiveFailed == 3 && lockAttempt == -1) {
            lockAttempt = i + 1;
        }
        i++;
    }
    if(lockAttempt != -1)
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);
    else
        printf("Lock Triggered At Attempt: Not Locked\n");

    printf("Total Failed Attempts: %d\n", totalFailed);

    return 0;
}
