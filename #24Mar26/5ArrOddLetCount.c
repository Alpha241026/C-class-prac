//print list of string elements having odd count

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char arr[n][20];

    /* Input strings */
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    /* Check and print strings with odd length */
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; arr[i][j] != '\0'; j++) {
            count++;
        }

        if (count % 2 != 0) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}