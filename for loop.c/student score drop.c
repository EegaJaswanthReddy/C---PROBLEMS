#include <stdio.h>
int main() {
    int N,m,sum=0,failed_subjects=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&m);
        sum+=m; 
    
    if(m<40){
        failed_subjects++;
    }
}
int avg = sum/N;
   printf("average score=%d\n",avg);
   printf("failed subjects=%d",failed_subjects);
    return 0;
}
