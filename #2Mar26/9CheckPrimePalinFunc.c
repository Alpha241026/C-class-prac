//Check number is prime palindrome or not using function

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

int Palin(int num) {
    int rev=0;

    while(num>0) {
        int d=num%10;
        rev = rev*10+d;
        num/=10;
    }
    if (rev==num)
    return 1;
    else
    return 0;
}

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if (Palin(n) && prime(n))
    printf("Prime Palindrome");
    else
    printf("Not prime palindrome");
}