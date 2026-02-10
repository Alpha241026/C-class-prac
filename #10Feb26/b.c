//Take input and do operation based on symbol entered or invalid

#include <stdio.h>

int main() {
    char symbol;
    int a,b;
    printf("Enter first operand:");
    scanf("%d",&a);
    printf("Enter second operand:");
    scanf("%d",&b);
    printf("Enter a symbol:");
    scanf(" %c",&symbol);

    switch(symbol) {
        case '+':
            int sum=a+b;
            printf("Sum :%d",sum);
            break;

        case '-':
            int diff=a-b;
            printf("Difference :%d",diff);
            break;

        case '*':
            int pro = a*b;
            printf("Product :%d",pro);
            break;

        case '/':
            int quo = a/b;
            printf("Quotient :%d",quo);
            break;

        case '%':
            int mod=a%b;
            printf("Modulus :%d",mod);
            break;

        default:
            printf("Invalid");
    }
}