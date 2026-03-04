//check prime or not using function

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
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (prime(n))
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);

    return 0;
}