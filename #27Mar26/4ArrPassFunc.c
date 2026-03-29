//pass array and size to function

#include <stdio.h>

void sum(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d\n",arr[i]);
    }
}

int main() {
    int arr[] = {10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
}