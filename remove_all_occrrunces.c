#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    printf("Enter character to remove all occurrences: ");
    scanf("%c", &ch);

    // Shift only characters not equal to ch
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing all occurrences of '%c': %s\n", ch, str);
    return 0;
}
