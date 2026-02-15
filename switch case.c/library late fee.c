#include <stdio.h>

int main() {
    int book,daysLate,fee;

    scanf("%d %d",&book,&daysLate);

    switch (book) {
        case 1:
            fee = daysLate * 2;
            break;
        case 2:
            fee = daysLate * 5;
            break;
        default:
            fee = 0;
    }

    printf("%d",fee);
    return 0;
}
