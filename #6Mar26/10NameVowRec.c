//print vowels from your name using recursion

#include <stdio.h>

void print_vowels(char *name) {

    if (*name == '\0') {
        return;
    }

    char c = *name;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c ", c);
    }

    print_vowels(name + 1);
}

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Vowels in your name: ");
    print_vowels(name);
    printf("\n");

    return 0;
}