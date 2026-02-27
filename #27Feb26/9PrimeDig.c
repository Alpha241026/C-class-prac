//count total no. of prime digits in a number

#include <stdio.h>

int main() {
    int n,i=0;
    printf("Enter number: ");
    scanf("%d",&n);

    int c=0;

    while(n>0) {
        int d=n%10;
        if (d==2 || d==3 || d==5 || d==7)
        c++;
        n/=10;
    }

    printf("No. of prime digits : %d",c);
}