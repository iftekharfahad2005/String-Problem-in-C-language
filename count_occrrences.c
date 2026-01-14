#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    printf("Enter character to count: ");
    scanf("%c", &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Character '%c' occurs %d time(s) in the string.\n", ch, count);

    return 0;
}
