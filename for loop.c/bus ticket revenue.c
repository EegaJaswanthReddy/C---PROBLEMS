#include <stdio.h>
int main() {
    int N,a,sum=0;
    scanf("%d %d",&N,&a);
    for(int i=0;i<N;i++){
        sum+=a;
        
    }
   printf("total collection=%d",sum);
    return 0;
}
