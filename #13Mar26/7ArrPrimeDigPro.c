//find out the product of digits of prime elements from the array

#include <stdio.h>

int prime(int num) {
    int temp=0;
    for (int i=2;i<num;i++) {
        if(num%i==0) {
            temp=1;
            break;
        }
    }
    if (temp==0) {
        return 1;
    }
    else {                              
        return 0;
    }
}

int digpro(int num,int pro){
    int d = num%10;
    pro*=d;
    num/=10;
    if(num==0)
    return pro;
    digpro(num,pro);
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++) {
        if (prime(arr[i]))
        printf("%d\n",digpro(arr[i],1));
    }
}