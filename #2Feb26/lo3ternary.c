/*Find largest among three numbers using ternary operator*/

#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);

    (a>b && a>c)?printf("Largest : %d",a):(b>c && b>a)?printf("Largest : %d",b):printf("Largest : %d",c);

    return 0;
}