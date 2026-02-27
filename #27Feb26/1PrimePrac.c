//prime practice
#include <stdio.h>

int main() {
    int n=4;
    int temp=0;
    for (int i=2;i<n;i++) {
        if(n%i==0) {
            temp=1;
            break;
        }
    }
    if (temp==0) {
        printf("Prime number");
    }
    else {                              
        printf("Not a prime");
    }

    return 0;
}