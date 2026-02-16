#include <stdio.h>
int main() {
    int sal,absent;
    scanf("%d %d",&sal,&absent);
    for(int i=0;i<absent;i++){
    sal=sal-100;
    }
   printf("%d",sal);
    return 0;
}
