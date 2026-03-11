//print your name in reverse order using recusion

#include <stdio.h>

void reverse_name(char *name) {

    if (*name == '\0') {
        return;
    }

    reverse_name(name + 1);

    printf("%c", *name);
}

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name in reverse: ");
    reverse_name(name);
    printf("\n");

    return 0;
}