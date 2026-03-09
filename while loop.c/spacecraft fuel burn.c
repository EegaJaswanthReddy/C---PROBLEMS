#include <stdio.h>

int main() {
    int fuel, N,burn[100],i = 0,emergencyStage = -1,wastedFuel = 0;
    scanf("%d", &fuel);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &burn[j]);
    }
    while(i < N) {
        fuel = fuel - burn[i];

        if(fuel < 0) {
            emergencyStage = i + 1;
            wastedFuel = -fuel;
            break;
        }
        i++;
    }
    if(emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d", wastedFuel);
    }

    return 0;
}
