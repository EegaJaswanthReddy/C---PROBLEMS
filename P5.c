#include <stdio.h>

int main() {
    int r, c, a[100][100], min, idx = 0;
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    min = 0;
    for(int j = 0; j < c; j++) min += a[0][j];

    for(int i = 1; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) sum += a[i][j];
        if(sum < min) {
            min = sum;
            idx = i;
        }
    }

    printf("%d", idx);
}
