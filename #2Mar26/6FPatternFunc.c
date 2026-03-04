//print F pattern using function

#include <stdio.h>

int FPattern() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || j==1 || i==3){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(){
    FPattern();
    return 0;
}