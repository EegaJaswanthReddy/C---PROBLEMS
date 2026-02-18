#include <stdio.h>
int main() {
  int N,a,sum=0,sessions=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>50){
        sessions++;
    }
  } 
  printf("total risk=%d",sum);
  printf("\nhigh risk sessions =%d",sessions);
    return 0;
}
