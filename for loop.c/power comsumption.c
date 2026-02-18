#include <stdio.h>
int main() {
  int N,a,sum=0,hours=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>5){
        hours++;
    }
  } 
  printf("total units=%d",sum);
  printf("\nspike hours =%d",hours);
    return 0;
}
