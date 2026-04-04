//replace the existing element using linear search
#include <stdio.h>

int main() {
    int r,new,n=0;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be replaced :\n");
    scanf("%d",&r);

    printf("Enter new element :\n");
    scanf("%d",&new);

    for (int i=0;i<n;i++) {
        if(arr[i]==r)
        arr[i]=new;
    }
    
    printf("Array after replacement :\n");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}