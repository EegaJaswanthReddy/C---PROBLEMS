#include <stdio.h>
int main() {
    int N,a,sum=0,over_crowded_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a; 
    
    if(a>100){
      over_crowded_days++;
    }
}
   printf("total patients=%d\n",sum);
   printf("over crowded days=%d",over_crowded_days);
    return 0;
}
