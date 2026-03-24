//count list of names which have been started and ended with vowels

#include <stdio.h>

/* Function to check if a character is a vowel */
int isVowel(char ch) {
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
            ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main(void) {
    int n;
    scanf("%d", &n);

    char arr[n][20];

    /* Input names */
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    /* Check and print valid names */
    for (int i = 0; i < n; i++) {
        int len = 0;

        /* Find length manually */
        while (arr[i][len] != '\0') {
            len++;
        }

        if (isVowel(arr[i][0]) && isVowel(arr[i][len - 1])) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}