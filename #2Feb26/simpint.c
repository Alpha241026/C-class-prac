/*Calculate the simple interest with the principal amount of 1 lakh for 3 years with roi 8%*/

#include <stdio.h>

int main(void) {
    int p,r,t;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter rate of interest:");
    scanf("%d",&r);
    printf("Enter time period:");
    scanf("%d",&t);

    double si = (p*r*t)/100.0;
    printf("%lf",si);
    return 0;
}