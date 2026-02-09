//Find difference between sum of all nos. from 1 to 50 and sum of even nos. from 51 to 100

#include <stdio.h>

int main() {
    int sum = 0;
    int sumEven = 0;
    int diff=0;
    for (int i=1;i<=50;i++) {
        sum+=i;
    }
    for (int i=51;i<=100;i++) {
        if (i%2==0)
        sumEven+=i;
    }
    diff=sumEven - sum;
    printf("\nDifference - %d",diff);
}