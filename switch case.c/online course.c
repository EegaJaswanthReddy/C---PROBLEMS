#include <stdio.h>
int main() {
    int course,fee;
    scanf("%d", &course);
    switch (course) {
        case 1:
            fee = 0;
            break;
        case 2:
            fee = 500;
            break;
        default:
            fee = 0;
    }
    printf("%d", fee);
    return 0;
}
