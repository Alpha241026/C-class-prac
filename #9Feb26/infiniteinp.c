#include <stdio.h>

int main() {
    int n;
    while(1) {
        scanf("%d",&n);
        if (n<0) {
            printf("Program stopped");
            break;
        }
    }
}