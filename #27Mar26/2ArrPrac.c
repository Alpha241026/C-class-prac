//sum of digits of integers in given string array

#include <stdio.h>

int main() {
    int arr[][3] = {"21","32","43","55","61","78","97"};

    for (int i=0;i<7;i++) {
        char f=arr[i][0];
        char s=arr[i][1];
        int first=(int)f-48;
        int second=(int)s-48;
        printf("%s : %d\n", arr[i],first+second);
    }
}