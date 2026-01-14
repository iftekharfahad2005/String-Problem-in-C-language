#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, pos = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    printf("Enter character to remove last occurrence: ");
    scanf("%c", &ch);

    // Find last occurrence
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            pos = i;
        }
    }

    // Remove character if found
    if(pos != -1) {
        for(i = pos; str[i] != '\0'; i++) {
            str[i] = str[i+1];
        }
    }

    printf("String after removing last occurrence of '%c': %s\n", ch, str);
    return 0;
}
