//find out the sum of prime elements from the array

#include <stdio.h>

int prime(int num) {
    int temp=0;
    for (int i=2;i<num;i++) {
        if(num%i==0) {
            temp=1;
            break;
        }
    }
    if (temp==0) {
        return 1;
    }
    else {                              
        return 0;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int sum=0;

    for (int i=0;i<n;i++) {
        if (prime(arr[i]))
        sum+=arr[i];
    }

    printf("%d\n",sum);
}