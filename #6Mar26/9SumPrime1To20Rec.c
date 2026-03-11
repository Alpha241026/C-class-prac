//find out the sum of all prime no.s from 1 to 20 using recursion

#include <stdio.h>

int is_prime(int n, int div) {
    if (n < 2) {
        return 0;
    }
    if (div * div > n) {
        return 1;
    }
    if (n % div == 0) {
        return 0;
    }
    return is_prime(n, div + 1);
}

int sum_primes(int current, int max) {
    if (current > max) {
        return 0;
    }
    
    int current_val = 0;
    if (is_prime(current, 2)) {
        current_val = current;
    }
    
    return current_val + sum_primes(current + 1, max);
}

int main() {
    int total = sum_primes(1, 20);
    printf("Sum of prime numbers from 1 to 20: %d\n", total);
    return 0;
}