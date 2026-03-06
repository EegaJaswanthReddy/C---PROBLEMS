#include <stdio.h>
int main() {
    int n, i = 0;
    int usage, max = 0;
    int surgeCount = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &usage);
        if(usage > max) {
            max = usage;
        }
        if(usage > 5) {
            surgeCount++;
        }
        i++;
    }
    printf("Max Usage: %d\n", max);
    printf("Surge Hours: %d\n", surgeCount);

    return 0;
}
