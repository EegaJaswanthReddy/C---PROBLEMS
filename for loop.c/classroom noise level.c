#include <stdio.h>
int main() {
  int N,a,max,periods=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
   if(a>max){
    max=a;
   }
    if(a>70){
        periods++;
    }
  } 
  printf("maximum noise=%d",max);
  printf("\nnoisy periods =%d",periods);
    return 0;
}
