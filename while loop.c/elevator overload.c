#include <stdio.h>
int main() {
    int maxWeight,N,weight,total = 0,count = 0,i = 0;
    scanf("%d %d",&maxWeight,%n);
    while (i < N) {
        scanf("%d",&weight);

        if (total + weight > maxWeight) {
            break;
        }
        total += weight;
        count++;
        i++;
    }
    if (i < N) {
        printf("Passengers Allowed: %d\n", count);
        printf("Overload: Yes\n");
    } else {
        printf("Passengers Allowed: %d\n", count);
        printf("Overload: No\n");
    }

    return 0;
}
