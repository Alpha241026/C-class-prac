//find out the sum of array elements except smallest and largest

#include <stdio.h>

int main() {
    int sum=0;
    int arr[] = {89,67,17,90,87,15,35,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    sum=arr[0]+arr[n-1];
    printf("Sum = %d ",sum);
}