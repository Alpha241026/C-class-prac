//Find average from 31 to 40 except 33, 36, 39

#include <stdio.h>

int main() {
    int sum = 0;
    int c=0;
    double average = 0.0;

    for (int i=31;i<=40;i++) {
        if ((i==33) || (i==36) || (i==39))
        continue;
        sum+=i;
        c++;
    }
    average = sum/c;
    printf("\nAverage - %.2lf",average);
}