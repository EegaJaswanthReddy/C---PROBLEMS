#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {

            int isSaddle = 1;

            for(int k = 0; k < c; k++) {
                if(a[i][j] > a[i][k]) {
                    isSaddle = 0;
                    break;
                }
            }

            for(int k = 0; k < r && isSaddle; k++) {
                if(a[i][j] < a[k][j]) {
                    isSaddle = 0;
                    break;
                }
            }

            if(isSaddle)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}
