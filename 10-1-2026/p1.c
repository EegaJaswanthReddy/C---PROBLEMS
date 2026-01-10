#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    fgets(a,100,stdin);
    char b[sizeof(a)];
    int index=0;
    for(int i=strlen(a)-1;i>=0;i--){
        b[index]=a[i];
        index++;
    }
    printf("%s",b);    
    return 0;
}