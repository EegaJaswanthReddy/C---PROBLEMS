#include <stdio.h>
int main() {
    int maxCapacity, N;
    int i = 0;
    int patients, treated = 0, rejected = 0;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &patients);
        if(treated + patients <= maxCapacity) {
            treated += patients;
        } 
        else {
            int remaining = maxCapacity - treated;
            if(remaining > 0) {
                treated += remaining;
                rejected += patients - remaining;
            } 
            else {
                rejected += patients;
            }
        }
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}
