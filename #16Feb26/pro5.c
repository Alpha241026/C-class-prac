#include <stdio.h>
int main(){
    int n=101;
    int dup=n;
    int rev=0;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("%d\n",rev);
    if(rev==dup)
        printf("palindrome");
    else
        printf("not palindrome");
    
    return 0;
}