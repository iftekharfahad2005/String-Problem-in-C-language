#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, position = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    printf("Enter character to find: ");
    scanf("%c", &ch);

   
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            position = i; 
        }
    }

    if(position != 1)
        printf("Last occurrence of '%c' is at position %d.\n", ch, position + 1);
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
