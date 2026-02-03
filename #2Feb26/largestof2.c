/*Find the largest among two numbers*/

#include <stdio.h>

int main(void) {
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if (a>b) {
        printf("Largest no. - %d",a);
    }
    else {
        printf("Largest no. - %d",b);
    }
    return 0;
}