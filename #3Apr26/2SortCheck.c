//check if array elements are already sorted or not

#include <stdio.h>

int main() {
    int c=0;
    int arr[] = {89,67,17,90,87,15,35,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++) {
        for(int j=1;j<n;j++) {
            if(arr[j]>arr[i]) {
                continue;
            }
            else {
                c++;
            }
        }
    }
    
    if(c>0)
    printf("Not sorted");
    else
    printf("Sorted");
}
