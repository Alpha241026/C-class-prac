//Even digits of a number using func

#include <stdio.h>

int dig(int n){
    int sum=0;
    while(n>0) {
        int d=n%10;
        if (d%2==0)
        printf("%d ",d);
        n/=10;
    }
}

int main() {
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);

    dig(num);
}