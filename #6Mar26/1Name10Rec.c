//print name 10 times
#include <stdio.h>

void name(int n) {
    printf("Arman\n");
    n--;
    if (n<1)
    return;
    name(n);
}

int main() {
    name(10);
}