//find sum of all odd numbers from 1 to 50 using recursion

#include <stdio.h>

int numbers(int n,int sum){
    if (n%2!=0)
    sum+=n;
    n++;
    if(n==50)
    return sum;
    numbers(n,sum);
}

int main() {
    printf("Sum = %d",numbers(1,0));
}