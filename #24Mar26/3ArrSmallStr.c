//find out smallest string from array

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char arr[n][20];

    /* Input strings */
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    int min_len = 1000;   // large initial value
    int index = 0;

    /* Find smallest string */
    for (int i = 0; i < n; i++) {
        int len = 0;

        while (arr[i][len] != '\0') {
            len++;
        }

        if (len < min_len) {
            min_len = len;
            index = i;
        }
    }

    printf("%s\n", arr[index]);

    return 0;
}