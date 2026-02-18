#include <stdio.h>
int main() {
  int N,a,sum=0,hours=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>40){
        hours++;
    }
  } 
  printf("total calls=%d",sum);
  printf("\noverload hours =%d",hours);
    return 0;
}
