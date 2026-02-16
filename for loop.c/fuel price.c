#include <stdio.h>
int main() {
    int N,a,max,high_price_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
      if(a > max){
        max = a;
      }
    if(a>100){
      high_price_days++;
    }
}
    
   printf("highest price=%d\n",max);
   printf("high price days=%d",high_price_days);
    
    return 0;
}
