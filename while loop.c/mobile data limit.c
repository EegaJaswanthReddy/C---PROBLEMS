#include <stdio.h>

int main() {
    int totalData,N;
    int usage;
    int day = 0;
    scanf("%d %d",&totalData,&N);
    while (day < N) {
        scanf("%d", &usage);
        totalData -= usage;
        if (totalData <= 0) {
            totalData = 0;   
            day++;           
            break;           
        }
        day++;
    }
    printf("Days Used: %d\n", day);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}
