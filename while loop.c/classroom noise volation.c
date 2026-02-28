#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int noise;
    int count = 0;         
    int currentStreak = 0;      
    int maxStreak = 0;          
    int i = 0;

    while (i < N) {
        scanf("%d", &noise);
        if (noise > 70) {
            count++;
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Noise Violations: %d\n", count);
    printf("Longest Violation Streak: %d\n", maxStreak);

    return 0;
}
