#include <stdio.h>
int main() {
    int N,a,sum=0,high_loss_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a; 
    
    if(a>100){
        high_loss_days++;
    }
}
   printf("total loss=%d\n",sum);
   printf("high loss days=%d",high_loss_days);
    return 0;
}
