//Check no. is palindrome or not using function

#include <stdio.h>

int Palin(int num) {
    int rev=0;

    while(num>0) {
        int d=num%10;
        rev = rev*10+d;
        num/=10;
    }
    if(rev==num)
    return 1;
    else
    return 0;
}

int main() {
    int n,i=0;
    printf("Enter number: ");
    scanf("%d",&n);

    if (Palin(n))
    printf("Palindrome");
    else
    printf("Not palindrome");
}