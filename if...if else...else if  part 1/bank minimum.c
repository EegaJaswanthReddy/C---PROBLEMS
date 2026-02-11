#include <stdio.h>
int main() {
    int bal;
    scanf("%d", &bal);
    if (bal < 1000){
        printf("Minimum Bal Not Maintained");
    }else
        printf("Minimum Bal Maintained");
    return 0;
}
