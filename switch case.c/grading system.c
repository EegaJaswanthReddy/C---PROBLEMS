#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch(m/10){
      case 9:
      printf("grade a");
      break;
      case 8:
      printf("grade b");
      break;
      case 7:
      printf("grade c");
      break;
      case 6:
      printf("grade d");
      break;
      case 5:
      printf("grade e");
      break;
      case 4:
      printf("grade f");
      break;
      case 3:
     printf("grade supplementary");
      case 2:
      if(m<30){
     printf("grade fail");
      }
    }
    
    return 0;
}
