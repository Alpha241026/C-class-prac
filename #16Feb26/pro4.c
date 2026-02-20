#include <stdio.h>
int main(){
    int n=2578;
    int p=1;
    while(n>0){
        int d=n%10;
        if(d%2!=0)
            p= p*d;
        n=n/10;
    }
    printf("%d",p);
    
    return 0;
}