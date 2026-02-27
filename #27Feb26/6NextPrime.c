//find prime number which is next to N

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
    printf("Enter number: ");
    scanf("%d",&n);
    int i=n+1;

    while(i>n) {
        if (prime(i)) {
            printf("%d",i);
            break;
        }
        i++;
    }
}