//print numbers 1 to 10
#include <stdio.h>

void numbers(int n){
    printf("%d\n",n);
    n++;
    if(n>10)
    return;
    numbers(n);
}

int main() {
    numbers(1);
}