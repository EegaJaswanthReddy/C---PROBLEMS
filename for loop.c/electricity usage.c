#include <stdio.h>
int main() {
    int N,u,sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&u);
        sum+=u;
    }
   printf("%d",sum);
    return 0;
}
