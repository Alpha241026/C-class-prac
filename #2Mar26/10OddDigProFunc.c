//Find product of odd digits of a number using function

#include <stdio.h>

int oddDig(int n){
    int pro=1;
    while(n>0) {
        int d=n%10;
        if (d%2!=0)
        pro*=d;
        n/=10;
    }
    return pro;
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Product of digits of %d = %d",num,oddDig(num));
}