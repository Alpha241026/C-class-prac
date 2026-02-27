//check product of digits of a no. is prime or not

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
    int n,i=0;
    printf("Enter number: ");
    scanf("%d",&n);

    int pro=1;

    while(n>0) {
        int d=n%10;
        pro*=d;
        n/=10;
    }

    if (prime(pro))
    printf("Product prime");
    else
    printf("Product is not prime");
}