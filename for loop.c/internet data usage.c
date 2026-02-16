#include <stdio.h>
int main() {
    int N,a,sum=0,high_usage_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a; 
    
    if(a>2){
      high_usage_days++;
    }
}
   printf("total data=%d\n",sum);
   printf("high usage days=%d",high_usage_days);
    return 0;
}
