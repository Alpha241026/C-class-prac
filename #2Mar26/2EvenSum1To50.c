//Sum of all even from 1 to 50 using func

#include <stdio.h>
int even(int num){
    if (num%2==0)
    return 1;
    else
    return 0;
}
int main() {
    int sum=0;
    for (int i=1;i<=50;i++){
        if (even(i))
        sum+=i;
    }
    printf("Sum = %d",sum);
}