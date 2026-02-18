#include <stdio.h>
int main() {
  int N,a,sum=0,deliveries=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>30){
        deliveries++;
    }
  } 
  printf("total delay=%d\n",sum);
  printf("delayed deliveries =%d",deliveries);
    return 0;
}
