//print all prime nos. from 21 to 50

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
    for (int i=21;i<=50;i++)
    {
        if(prime(i)) {
            printf("%d\t",i);
        }
    }
}