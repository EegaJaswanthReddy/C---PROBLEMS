#include <stdio.h>
int main() {
    int capacity,n,a,critical=0,i=0,sum=0;
    scanf("%d %d",&capacity,&n);
    while(i<n){
        scanf("%d",&a);
        sum+=a;
        if(sum>(0.9*capacity)){
        critical++;
    }
    i++;
    }
    printf("final occupied beds:%d\n",sum);
    printf("critical hours:%d",critical);
    return 0;
}
