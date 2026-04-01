#include <stdio.h>

int main() {
    int R, C, a[100][100];
    scanf("%d %d", &R, &C);

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d", &a[i][j]);

    int max=0, idx=0;

    for(int i=0;i<R;i++) {
        int count=0;

        for(int j=0;j<C;j++) {
            int flag=1;
            for(int k=0;k<j;k++)
                if(a[i][j]==a[i][k]) flag=0;

            if(flag) count++;
        }

        if(count>max) {
            max=count;
            idx=i;
        }
    }

    printf("%d", idx);
    return 0;
}
