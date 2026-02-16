#include <stdio.h>
int main() {
    int battery,N,d,sum=0,remain;
    scanf("%d %d",&battery,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&d);
        sum+=d;
        remain=battery-sum;
    }
   printf("%d",remain);
    return 0;
}
