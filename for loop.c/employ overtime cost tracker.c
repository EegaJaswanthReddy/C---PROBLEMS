#include <stdio.h>
int main() {
  int N,a,cost=0,sum=0,overtime=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>3){
        overtime++;
    }
  } 
  printf("total overtime hours=%d\n",sum);
    cost=sum*200;
  printf("overtime cost=%d",cost);
  printf("\nheavy overtime days =%d",overtime);
    return 0;
}
