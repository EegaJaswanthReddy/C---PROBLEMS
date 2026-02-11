#include <stdio.h>
int main() {
    int batry;
    scanf("%d", &batry);
    if (batry < 20)
        printf("Low Battery");
    else
        printf("Battery OK");
    return 0;
}
