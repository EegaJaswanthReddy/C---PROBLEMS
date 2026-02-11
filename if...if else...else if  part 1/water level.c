#include <stdio.h>
int main() {
    int l;
    scanf("%d", &l);
    if (l > 90)
        printf("Overflow Warning");
    else
        printf("Safe Level");
    return 0;
}
