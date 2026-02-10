////Find the sum of numbers from 732 to 989 whose center digit is even and extremes are odd

#include <stdio.h>

int main() {
    int sum=0;
    for (int i=732;i<=989;i++) {
        if (((i/100)%2!=0 && (i%10)%2!=0) && ((i/10)%10)%2==0) {
            printf("%d\n",i);
            sum+=i;
        }
    }
    printf("\nSum of all nos. from 732 to 989 whose center digit is even and extremes are odd - %d",sum);
}