//Find the sum of numbers which is divisible by 7 and 8 from 1 to 500

#include <stdio.h>

int main() {
    int sum=0;
    for (int i=1;i<=500;i++) {
        if ((i%7==0) && (i%8==0))
        sum+=i;
    }
    printf("\nSum of all nos. from 1 to 500 that are divisible by 7 and 8 - %d",sum);
}