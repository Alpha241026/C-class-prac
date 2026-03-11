//find out the sum of all even digits of a no. using recursion

#include <stdio.h>

int digsum(int n,int sum){
    int d = n%10;
    if (d%2==0)
    sum+=d;
    n/=10;
    if(n==0)
    return sum;
    digsum(n,sum);
}

int main() {
    int num;
    printf("Enter a no.: \n");
    scanf("%d",&num);
    printf("Sum = %d",digsum(num,0));
}