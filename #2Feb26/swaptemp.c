/*Swap two numbers using temporary variable*/

#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("After swapping...\n");
    printf("First number: %d",a);
    printf("Second number: %d",b);
    return 0;
}