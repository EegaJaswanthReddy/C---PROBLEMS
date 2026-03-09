#include <stdio.h>
int main() {
    int n, i = 0,vehicles[100],congestionMinutes = 0,currentStreak = 0,longestStreak = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &vehicles[i]);
        i++;
    }
    i = 0;
    while (i < n) {
        if (vehicles[i] > 20) {
            congestionMinutes++;
            currentStreak++;

            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n", congestionMinutes);
    printf("Longest Congestion Streak: %d\n", longestStreak);

    return 0;
}
