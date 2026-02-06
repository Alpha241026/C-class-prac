//5.Dad_Little_princess - 14

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",&name);
    int c=0;

    for (int i=0;i<strlen(name);i++) {
        if(name[i]>=97 && name[i]<=122) {
            c++;
            printf("%c",name[i]);
        }
    }
    printf("\nSmall letters - %d",c);
    return 0;
}