// goto statement problems
#include <stdio.h>

int main() {
    int a=10;
    Arman:
    printf("%d\n",a);
    a--;
    if(a>=1)
    goto Arman;
    
    return 0;
}