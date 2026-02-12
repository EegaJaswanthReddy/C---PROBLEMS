#include <stdio.h>
int main() {
int result;
scanf("%d",&result);
if(result>55&&result<85){
    printf("pass");
}else if(result>=85&&result<=100){
  printf("distinction");
}else
  printf("fail");
    return 0;
}
