#include<stdio.h>
int main(){
    int n,temp,sum = 0;
    scanf("%d",&n);

    temp = n;
    for(; temp > 0; temp /= 10){
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
         fact *= i;
         sum += fact;
    }
     if(sum == n)
        printf("YES");
        else
          printf("NO");
          return 0;
}

  
