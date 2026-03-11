//check no. is prime or not using recursion

#include <stdio.h>

int prime(int n, int div) {
    
    if (n <= 1) {
        return 1; 
    }
    
    if (div == n) {
        return 0; 
    }
    
    if (n % div == 0) {
        return 1;
    }
    
    return prime(n, div + 1);
}

int main() {
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    
    // 0 means it passed the prime test
    if (prime(num, 2) == 0) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}