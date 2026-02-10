//get input as a single letter and check symbol or invalid

#include <stdio.h>

int main() {
    char symbol;
    printf("Enter a symbol:");
    scanf(" %c",&symbol);
    switch(symbol) {
        case '+':
        printf("Additon");
        break;

        case '-':
        printf("Subtraction");
        break;

        case '*':
        printf("Multiplication");
        break;

        case '/':
        printf("Division (quotient)");
        break;

        case '%':
        printf("Division (modulus)");
        break;

        default:
        printf("Invalid");
    }
}