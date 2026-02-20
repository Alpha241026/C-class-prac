#include <stdio.h>

int main() {

    char s[]="arman";
    char ch;
    int i=0;
    hi:
    ch=s[i];
    printf("%c\n",ch);
    i++;
    if(i<7)
    goto hi;
    return 0;
}