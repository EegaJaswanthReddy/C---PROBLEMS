#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    while(i < n) {
        scanf("%d", &a[i]);
        i++;
    }
    int drops = 0;
    int consecutive = 0;
    int crashDay = -1;
    i = 1;
    while(i < n) {
        if(a[i] < a[i-1]) {
            drops++;
            consecutive++;
            if(consecutive == 3 && crashDay == -1) {
                crashDay = i + 1;   // day number
            }
        } 
        else {
            consecutive = 0;
        }
        i++;
    }

    if(crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);

    printf("Total Drops: %d\n", drops);

    return 0;
}
