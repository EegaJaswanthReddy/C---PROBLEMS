#include <stdio.h>
int main() {
    int n, i, count = 0;
    float sum = 0, avg;
    scanf("%d", &n);
    int marks[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++) {
        if(marks[i] > avg) {
            count++;
        }
    }
    printf("Count of students above average = %d\n", count);
    return 0;
}
