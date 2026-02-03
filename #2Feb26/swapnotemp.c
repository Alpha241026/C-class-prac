/*Swap two numbers without temporary variable*/

#include <stdio.h>

int main(void) {
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping...\n");
    printf("First number: %d",a);
    printf("Second number: %d",b);
    return 0;
}