#include <stdio.h>
int main(){
    int n=153,sum=0,dup=n;
    while(n>0){
        int d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(sum==dup)
    printf("armstrong");
    else
    printf(" not armstrong");
    
}