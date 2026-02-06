//2.Innocent_Guy - 2

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",&name);

    int c=0;
    for (int i=0;i<strlen(name);i++) {
        if(name[i]>=65 && name[i]<=90) {
            c++;
            printf("%c",name[i]);
        }
    }
    printf("\nCapital letters - %d",c);
    return 0;
}