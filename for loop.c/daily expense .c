#include <stdio.h>
int main() {
    int d,n,sum=0,spend=0;
    scanf("%d", &d);
    for(int i=0;i<d;i++){
        scanf("%d",&n);
        sum+=n;
    if(n>1000){
     spend++;
    }
    }
    printf("%d",sum);
    printf("\noverspend =%d",spend);

    return 0;
}
