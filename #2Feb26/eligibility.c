/*Check the eligibility of marriage using age :-
below 1 - invalid
below 18 - minor
18-21 - major
21-60 - eligible
above 61 - expired
above 100 - invalid*/

#include <stdio.h>

int main(void) {
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if (age<1 || age>100) {
        printf("Invalid");
    }
    else if (age<18) {
        printf("Minor");
    }
    else if(age<21) {
        printf("Major");
    }
    else if(age<=60) {
        printf("Eligible");
    }
    else {
        printf("Expired");
    }
    return 0;
}