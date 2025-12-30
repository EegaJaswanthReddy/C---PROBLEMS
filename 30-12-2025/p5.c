#include <stdio.h>

int main() {
    int i,n,a=1;
    scanf("%d",&n);
    if(n>0){
    for(i=1;i<=n;++i){
        a*=i;}
    printf("%d ",a);

}
    return 0;
}