//find the sum of prime numbers from 21 to 40

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
    int sum=0;
    for (int i=21;i<=50;i++)
    {
        if(prime(i)) {
            sum+=i;
        }
    }
    printf("Sum of primes: %d",sum);
}