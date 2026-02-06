//8.LoVeR_bOy - 4, 4

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    char cap[10];
    char small[10];
    scanf("%s",&name);
    int c=0;
    int s=0;

    for (int i=0;i<strlen(name);i++) {
        if(name[i]>=65 && name[i]<=90) {
            c++;
            cap[c-1]+=name[i];
        }
        else if(name[i]>=97 && name[i]<=122) {
            s++;
            small[s-1]+=name[i];
        }
    }

    printf("Capital letters - %d\n",c);
    for (int i=0;i<strlen(cap);i++) {
        printf("%c",cap[i]);
    }

    printf("\nSmall letters - %d\n",s);
    for (int i=0;i<strlen(small);i++) {
        printf("%c",small[i]);
    }
    return 0;
}