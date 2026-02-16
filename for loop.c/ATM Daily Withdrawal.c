#include <stdio.h>
int main() {
    int N,WA,sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&WA);
        sum+=WA;
    }
    if(sum<=10000){
     printf("approved");
    }else
    printf("limit exceeded");
    
    
    return 0;
}
