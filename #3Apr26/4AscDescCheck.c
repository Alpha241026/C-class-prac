//check if elements are arranged in ascending or descending order

#include <stdio.h>

int main() {
    int arr[] = {1,5,7,14,25,37,51};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(arr[0]<arr[n-1])
    printf("Ascending");
    else
    printf("Descending");
}