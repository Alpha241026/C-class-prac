/*Find largest among three numbers*/

#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);

    if ((a>b) && (a>c)) {
        printf("Largest no. - %d",a);
    }
    else if ((b>a) && (b>c)) {
        printf("Largest no. - %d",b);
    }
    else {
        printf("Largest no. - %d",c);
    }
    return 0;
}