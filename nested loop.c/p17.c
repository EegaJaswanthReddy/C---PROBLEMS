#include <stdio.h>
int main() {
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 4 - i; j <= 4; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
