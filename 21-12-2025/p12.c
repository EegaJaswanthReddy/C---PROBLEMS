#include <stdio.h>
int main() {
    int sal;
    scanf("%d",&sal);
    if(sal>=20000){
       sal=sal+2000;
       printf("%d",sal);
    
}else if(sal<20000){
    sal=sal+1000;
    printf("%d",sal);
}
    return 0;
}