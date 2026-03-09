#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N)
    int i = 0, amount,highCount = 0,consecutive = 0,fraudAttempt = -1;
    while (i < N) {
        scanf("%d", &amount);
        if (amount >= 50000) {
            highCount++;
            consecutive++;
        } else {
            consecutive = 0;
        }
        if (consecutive == 3 && fraudAttempt == -1) {
            fraudAttempt = i + 1; 
        }
        i++;
    }
    if (fraudAttempt != -1)
        printf("Fraud Triggered At Attempt: %d\n", fraudAttempt);
    else
        printf("Fraud Triggered At Attempt: Not Triggered\n");

    printf("High-Value Transactions: %d\n", highCount);

    return 0;
}
