#include <stdio.h>
int main(){
    int n=2578;
    int se=0,so=0;
    while(n>0){
        int d=n%10;
        if(d%2==0)
            se+=d;
        else 
            so+=d;
        n=n/10;
    }
    (so>se)?printf("%d\n",so):printf("%d\n",se);
    int diff=(so>se)?so-se:se-so;
    printf("difference %d",diff);
}