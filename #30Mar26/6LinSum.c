//find out the sum of first and second largest element of array
#include <stdio.h>

int main() {
    int l,sl,n=0;

    printf("Enter size of array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    l=arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]>l)
        l=arr[i];
    }
    printf("Largest element: %d",l);

    sl=arr[n-1];
    for (int i=n-1;i>=0;i--) {
        if(arr[i]!=l) {
            if (arr[i]>sl)
            sl=arr[i];
        }
    }
    printf("Second largest element: %d",sl);

    return 0;
}