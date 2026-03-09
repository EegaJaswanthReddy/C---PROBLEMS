#include <stdio.h>

int main() {
    int n, i = 0,vibration,unsafeCount = 0,consecutive = 0,breakdown = -1;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &vibration);
        if (vibration > 70) {
            unsafeCount++;
            consecutive++;
            if (consecutive == 3 && breakdown == -1) {
                breakdown = i + 1; 
            }
        } else {
            consecutive = 0;
        }

        i++;
    }
    if (breakdown == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdown);

    printf("Unsafe Readings: %d\n", unsafeCount);

    return 0;
}
