//Loop from 51 to 100 and find sum of last digit of each number divisible by 3 or 5

#include <stdio.h>

int main() {
    int sum=0;
    for (int i=51;i<=100;i++) {
        if ((i%3==0) || (i%5==0))
        sum+=(i%10);
    }
    printf("\nSum of last digit of all nos. from 51 to 100 that are divisible by 3 or 5 - %d",sum);
}