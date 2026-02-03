/*Find average of n numbers*/

#include <stdio.h>

int main(void) {
    int n,sum=0,value;
    printf("Enter n:");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        printf("Enter number %d:",i);
        scanf("%d",&value);
        sum+=value;
    }

    double avg = (double)sum / n;
    printf("Average: %.2lf",avg);
    return 0;
}