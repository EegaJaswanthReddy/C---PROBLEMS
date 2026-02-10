#include <stdio.h>

int main()
{
    int n, i, j, count = 0, Prime;
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        Prime = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime == 1)
        {
            count++;
        }
    }

    printf(" %d = %d\n", n, count);

    return 0;
}
