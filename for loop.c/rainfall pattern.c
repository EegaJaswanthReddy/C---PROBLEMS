#include <stdio.h>
int main() {
    int N,a,sum=0,heavy_rain=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a; 
    
    if(a>50){
        heavy_rain++;
    }
}
   printf("total rainfall=%d\n",sum);
   printf("heavy rain days=%d",heavy_rain);
    return 0;
}
