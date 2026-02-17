#include <stdio.h>
int main() {
  int N,a,sum=0,days=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>50000){
        days++;
    }
  }  
  printf("total revenue=%d\n",sum);
  printf("days=%d",days);
    return 0;
}
