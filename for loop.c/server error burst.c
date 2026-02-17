#include <stdio.h>
int main() {
  int N,a,sum=0,critical_hours=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    sum+=a;
    if(a>50){
        critical_hours++;
    }
  }  
  printf("total errors=%d\n",sum);
  printf("critical hours=%d",critical_hours);
    return 0;
}
