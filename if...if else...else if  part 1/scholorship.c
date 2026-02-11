#include <stdio.h>
int main() {
    int m, income;
    scanf("%d %d", &m,&income);
    if (m>= 85 && income < 300000)
        printf("Eligible");
    else
        printf("Not Eligible");
    return 0;
}
