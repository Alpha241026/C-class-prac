//print the list of names which have even count of letters

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n][20];

    for (int i=0;i<n;i++) {
        scanf("%s",&arr[i]);
    }
    
    for (int i=0;i<n;i++) {
        int count = 0;
        for (int j=0;arr[i][j]!='\0';j++) {
            count++;
        }
        if(count%2==0){
            printf("%s\n",arr[i]);
        }
    }
}