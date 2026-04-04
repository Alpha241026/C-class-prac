//swap first and last element of array

#include <stdio.h>

int main() {
    int temp,n=0;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    temp=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;

    printf("Array after swapping :\n");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }

    return 0;
}