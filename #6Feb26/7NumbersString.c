//7.Dusky_Queen1589 - 9851

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",&name);

    for (int i=0;i<strlen(name);i++) {
        if(name[i]>=48 && name[i]<=57)
            printf("%c",name[i]);
    }
    return 0;
}