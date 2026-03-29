//given a string array (having integers) char arr[] = {"6789","1234","2468","1357","5678"}, do the following operations on it with functions :-
//=> print even digits of each integer element
//=> print odd digits of each element
//=> print whether elements are odd or even
//=> print prime digits of each element
//=> print product of digits of eacb element

// Perform operations on string array of integers

#include <stdio.h>

/* Check if digit is prime */
int isPrime(int d) {
    return (d == 2 || d == 3 || d == 5 || d == 7);
}

/* Print even digits */
void printEvenDigits(char str[]) {
    printf("Even digits: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int d = str[i] - '0';
        if (d % 2 == 0) {
            printf("%d ", d);
        }
    }
    printf("\n");
}

/* Print odd digits */
void printOddDigits(char str[]) {
    printf("Odd digits: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int d = str[i] - '0';
        if (d % 2 != 0) {
            printf("%d ", d);
        }
    }
    printf("\n");
}

/* Check if number is even or odd */
void checkEvenOdd(char str[]) {
    int last = str[0] - '0';
    for (int i = 0; str[i] != '\0'; i++) {
        last = str[i] - '0';
    }

    if (last % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

/* Print prime digits */
void printPrimeDigits(char str[]) {
    printf("Prime digits: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int d = str[i] - '0';
        if (isPrime(d)) {
            printf("%d ", d);
        }
    }
    printf("\n");
}

/* Print product of digits */
void productDigits(char str[]) {
    int prod = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        int d = str[i] - '0';
        prod *= d;
    }
    printf("Product: %d\n", prod);
}

int main() {
    char arr[5][5] = {"6789","1234","2468","1357","5678"};

    for (int i = 0; i < 5; i++) {
        printf("\nElement: %s\n", arr[i]);

        printEvenDigits(arr[i]);
        printOddDigits(arr[i]);
        checkEvenOdd(arr[i]);
        printPrimeDigits(arr[i]);
        productDigits(arr[i]);
    }

    return 0;
}