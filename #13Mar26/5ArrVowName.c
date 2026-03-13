//print the list of names which have been started with vowels

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n][20];

    for (int i=0;i<n;i++) {
        scanf("%s",&arr[i]);
    }

    for (int i=0;i<n;i++) {
        if ((arr[i][0]=='A') || (arr[i][0]=='E') || (arr[i][0]=='I') || (arr[i][0]=='O') || (arr[i][0]=='U') || (arr[i][0]=='a') || (arr[i][0]=='a') || (arr[i][0]=='e') || (arr[i][0]=='i') || (arr[i][0]=='o') || (arr[i][0]=='u'))
        printf("%s\n",arr[i]);
    }

}