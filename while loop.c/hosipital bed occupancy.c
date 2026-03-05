#include <stdio.h>
int main() {
    int capacity,N,change,occupied = 0,criticalHours = 0,i = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);
    int threshold = capacity * 0.9;
    while (i < N) {
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied > threshold) {
            criticalHours++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalHours);
    return 0;
}
