//Sum of all odd from 1 to 20 using func

#include <stdio.h>
int odd(int num){
    if (num%2!=0)
    return 1;
    else
    return 0;
}
int main() {
    int sum=0;
    for (int i=1;i<=20;i++){
        if (odd(i))
        sum+=i;
    }
    printf("Sum = %d",sum);
}