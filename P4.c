#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = -1, secondMax = -1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int val = arr[i][j];
            if(val > max) {
                secondMax = max; 
                max = val;        
            }
            else if(val > secondMax && val != max) {
                secondMax = val;   
            }
        }
    }

    printf("%d", secondMax);
    return 0;
}
