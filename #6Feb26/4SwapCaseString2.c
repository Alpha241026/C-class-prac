//4._._Mr.InDiA - _._mR.iNdIa

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",&name);

    for (int i=0;i<strlen(name);i++) {
        if(name[i]>=65 && name[i]<=90)
            printf("%c",name[i]+32);
        else if(name[i]>=97 && name[i]<=122)
            printf("%c",name[i]-32);
        else
            printf("%c",name[i]);
    }
    return 0;
}