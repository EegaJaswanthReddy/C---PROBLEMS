#include <stdio.h>
int main() {
    int N, i = 0,hours,activeWeeks = 0;
   scanf("%d", &N);
    while(i < N) {
        scanf("%d", &hours);
        if(hours == 0) {
            activeWeeks++;
        }
        i++;
    }
    printf("Inactive Weeks: %d\n",activeWeeks);
    if(activeWeeks >= 3) {
        printf("Risk Status: High");
    } else {
        printf("Risk Status: Low");
    }
    return 0;
}
