#include <stdio.h>
int main() {
    int dataPackGB, N;
    int usage[100];
    int i = 0;
    int exhaustedDay = -1;
    scanf("%d", &dataPackGB);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &usage[j]);
    }
    int remaining = dataPackGB;
    while(i < N) {
        remaining = remaining - usage[i];
        if(remaining <= 0) {
            exhaustedDay = i + 1;
            break;
        }

        i++;
    }
    if(exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        int overused = (remaining < 0) ? -remaining : 0;
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}
