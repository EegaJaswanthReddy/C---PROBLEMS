#include <stdio.h>

int main() {
    int fuel, n;
    scanf("%d", &fuel);   
    scanf("%d", &n); 
    int trip[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &trip[i]);     
    }
    int i = 0;
    int completed = 0;
    while(i < n) {
        if(fuel >= trip[i]) {
            fuel = fuel - trip[i];
            completed++;
            i++;
        } else {
            break;
        }
    }
    printf("Completed Trips: %d\n", completed);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
