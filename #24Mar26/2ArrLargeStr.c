//find out the largest string from the array

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char arr[n][20];

    /* Input strings */
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    int max_len = 0;
    int index = 0;

    /* Find largest string */
    for (int i = 0; i < n; i++) {
        int len = 0;

        while (arr[i][len] != '\0') {
            len++;
        }

        if (len > max_len) {
            max_len = len;
            index = i;
        }
    }

    printf("%s\n", arr[index]);

    return 0;
}