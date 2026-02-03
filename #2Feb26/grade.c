/*Find grade using given attendance percentage :-
90+ - 5
85-90 - 4
80-85 - 3
75-80 - 2
below 75 - detained
*/

#include <stdio.h>

int main(void) {
    int att;

    printf("Enter attendance percentage: ");
    scanf("%d", &att);

    if (att < 0 || att > 100) {
        printf("Invalid attendance\n");
    }
    else if (att >= 90) {
        printf("Grade: 5\n");
    }
    else if (att >= 85) {
        printf("Grade: 4\n");
    }
    else if (att >= 80) {
        printf("Grade: 3\n");
    }
    else if (att >= 75) {
        printf("Grade: 2\n");
    }
    else {
        printf("Detained\n");
    }

    return 0;
}