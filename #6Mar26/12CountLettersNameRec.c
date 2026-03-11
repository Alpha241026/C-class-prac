//find total no. of letters in your name using recursion

#include <stdio.h>

int count_letters(char *name) {

    if (*name == '\0') {
        return 0;
    }
    
    return 1 + count_letters(name + 1);
}

int main() {
    char name[50];
    printf("Enter your name: ");
    
    // Use %[^\n] to allow spaces in the name input
    scanf(" %[^\n]", name);

    int total = count_letters(name);
    printf("Total number of letters: %d\n", total);

    return 0;
}