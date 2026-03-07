#include <stdio.h>

int main()
{
    int n, i = 0;
    int hours;
    int totalOvertime = 0;
    int burnoutDays = 0;
    scanf("%d", &n);
    while(i < n)
    {
        scanf("%d", &hours);
        totalOvertime = totalOvertime + hours;

        if(hours > 4)
        {
            burnoutDays++;
        }

        i++;
    }
    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);

    return 0;
}
