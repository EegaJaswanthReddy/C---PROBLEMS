#include <stdio.h>
int main() {
    int N,i= 0,a,current=0,max= 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d",&a);
        if (a==0) {
            current++;            
            if (current>max) {
                max=current;   
            }
        } else {
            current=0;       
        }
        i++;
    }
    printf("Longest default Streak: %d\n", max);
    return 0;
}
