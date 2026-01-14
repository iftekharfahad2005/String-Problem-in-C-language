#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    printf("Enter character to find: ");
    scanf("%c", &ch);

    printf("Occurrences of '%c' found at positions: ", ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if(!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}
