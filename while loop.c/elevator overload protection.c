#include <stdio.h>
int main() {
    int maxWeight, N;
    int weight[100];
    int i = 0, total = 0, count = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &weight[j]);
    }
    while(i < N) {
        if(total + weight[i] > maxWeight) {
            break;
        }
        total = total + weight[i];
        count++;
        i++;
    }
    printf("People Entered: %d\n", count);
    if(i < N)
        printf("Overload Status: Yes");
    else
        printf("Overload Status: No");

    return 0;
}
