//sum of integers in given string array
#include <stdio.h>
int main() {
    char arr[]={'8','7','5','2','9'};

    int sum = 0;

    for(int i=0;i<5;i++) {
        sum+=(int)(arr[i]-48);
    }
    printf("%d",sum);
}