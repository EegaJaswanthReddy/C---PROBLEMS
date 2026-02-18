#include <stdio.h>
int main() {
  int N,a,min,low_voltage=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&a);
    if(i==0){
      min=a;
    }
    if(a<210){
        low_voltage++;
    }
    if(a<min){
      min=a;
  } 
  } 
  printf("min voltage=%d\n",min);
  printf("low voltage =%d",low_voltage);
    return 0;
}
