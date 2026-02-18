#include <stdio.h>
int main() {
  int N,a,max,readings=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      scanf("%d",&a);
    if(a>max){
      max=a;
    }
    if(a>140){
        readings++;
    }
  } 
  printf("max heart rate=%d",max);
  printf("\ndanger readings=%d",readings);
    return 0;
}
