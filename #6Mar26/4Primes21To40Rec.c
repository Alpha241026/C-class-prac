//print list of prime no.s from 21 to 40 using recursion

#include <stdio.h>

int is_prime(int n, int div) {
    if (div == n) {
        return 1;
    }
    if (n % div == 0) {
        return 0;
    }
    return is_prime(n, div + 1);
}

void print_primes(int current, int max) {
    if (current > max) {
        return;
    }
    if (is_prime(current, 2)) {
        printf("%d ", current);
    }
    print_primes(current + 1, max);
}

int main() {
    print_primes(21, 40);
    printf("\n");
    return 0;
}