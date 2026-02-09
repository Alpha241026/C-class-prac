//Print list of nos. from 21 to 40 without multiples of 3

#include <stdio.h>

int main() {
    for (int i=21;i<=40;i++) {
        if (i%3==0)
        continue;
        printf("%d",i);
    }
}