//linear search
#include <stdio.h>

int main() {
    int arr[] = {67,90,23,56,89,12,11};
    int target=43;
    int index=0, flag=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++) {
        if(arr[i]==target) {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==0) 
    printf("%d",-1);
    else
    printf("%d",index);
}