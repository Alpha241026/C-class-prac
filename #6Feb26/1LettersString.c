//1._._Self_Lover_._ - 9

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",&name);
    int c=0;

    for (int i=0;i<strlen(name);i++) {
        if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122)) {
            c++;
            printf("%c",name[i]);
        }
    }
    printf("\nLetters - %d",c);
    return 0;
}