//find out the product of odd numbers from 1 to 20 using recursion

#include <stdio.h>

int numbers(int n,int pro){
    if (n%2!=0)
    pro*=n;
    n++;
    if(n>20)
    return pro;
    numbers(n,pro);
}

int main() {
    printf("Sum = %d",numbers(1,1));
}