#include <stdio.h>
int main() {
int ac;
scanf("%d",&ac);
if(ac<=35&&ac>25){
    printf("cooling mode");
}else if(ac>18&ac<=25){
  printf("normal mode");
}else
printf("heating mode");
    return 0;
}
