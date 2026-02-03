/*Find largest among two numbers using ternary operator*/

#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    c = a>b ? a:b ;
    printf("Largest: %d",c);
    return 0;
}