//count total number of prime numbers from 11 to 40

#include <stdio.h>

int prime(int num) {
    int temp=0;
    for (int i=2;i<num;i++) {
        if(num%i==0) {
            temp=1;
            break;
        }
    }
    if (temp==0) {
        return 1;
    }
    else {                              
        return 0;
    }
}

int main() {
    int c=0;
    for (int i=11;i<=40;i++)
    {
        if(prime(i)) {
            c++;
        }
    }
    printf("No. of primes: %d",c);
}