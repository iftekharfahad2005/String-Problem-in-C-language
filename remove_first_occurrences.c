#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    // Loop through the string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch && !found) {
            found = 1; // mark first occurrence
        }
        if(found) {
            str[i] = str[i + 1]; // shift characters left
        }
    }

    printf("String after removing first occurrence of '%c': %s\n", ch, str);

    return 0;
}
