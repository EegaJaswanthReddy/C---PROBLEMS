#include <stdio.h>
int main() {
int user;
scanf("%d",&user);
if(user==1){
    printf("Admin");
}else if(user==2){
  printf("user");
}else if(user==3){
printf("guest");
}
    return 0;
}
