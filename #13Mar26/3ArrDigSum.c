//print the list of sum of digits of the element from the array

#include <stdio.h>

int digsum(int num,int sum){
    int d = num%10;
    sum+=d;
    num/=10;
    if(num==0)
    return sum;
    digsum(num,sum);
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++) {
        printf("%d\n",digsum(arr[i],0));
    }

}