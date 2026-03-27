//sum of digits in integer array

#include <stdio.h>

int main() {
    int arr[] = {678,56,12,34,90,102,45};

    for (int i=0;i<7;i++) {
        int x=arr[i];
        int sum=0;
        while(x>0) {
            int mod=x%10;
            sum=sum+mod;
            x=x/10;
        }
        printf("%d : %d\n",arr[i],sum);
    }
    return 0;
}