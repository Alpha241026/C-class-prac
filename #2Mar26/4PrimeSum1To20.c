//Sum of all prime from 1 to 20 using func

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
    int sum=0;
    for (int i=1;i<=20;i++) {
        if (prime(i))
        sum+=i;
    }
    printf("Sum = %d",sum);
}