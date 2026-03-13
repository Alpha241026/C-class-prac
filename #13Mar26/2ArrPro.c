//find out the product of even elements from the array

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int pro=1;

    for (int i=0;i<n;i++) {
        if (arr[i]%2==0)
        pro*=arr[i];
    }

    printf("%d",pro);
}