//print list of elements from array which have more than 3 vowel count

#include <stdio.h>

/* Function to check vowel */
int isVowel(char ch) {
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
            ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main(void) {
    int n;
    scanf("%d", &n);

    char arr[n][20];

    /* Input strings */
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    /* Check each string */
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; arr[i][j] != '\0'; j++) {
            if (isVowel(arr[i][j])) {
                count++;
            }
        }

        if (count > 3) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}