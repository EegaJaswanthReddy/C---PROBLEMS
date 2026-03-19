#include <stdio.h>

int main() {
    int n, i, j, target;
    scanf("%d", &n);
    int prices[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    scanf("%d", &target);
    int found = 0;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(prices[i] + prices[j] == target) {
                printf(%d %d\n", prices[i], prices[j]);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(!found) {
        printf("\n");
    }

    return 0;
}
