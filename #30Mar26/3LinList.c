//print list of elements within specific range
#include <stdio.h>

int main() {
    int rs,re,n=0;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter range starting :\n");
    scanf("%d",&rs);

    printf("Enter range ending :\n");
    scanf("%d",&re);

    printf("Filtered list of elements :\n");
    for (int i=0;i<n;i++) {
        if(arr[i]>=rs && arr[i]<=re)
        printf("%d",arr[i]);
    }
    return 0;
}