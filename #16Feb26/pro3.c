#include <stdio.h>

int main() {

    int a;
    int i=1;
    scanf("%d",&a);
    hi:
    printf("%d * %d = %d\n",a,i,a*i);
    i++;
    if(i<=10)
    goto hi;
    return 0;
}