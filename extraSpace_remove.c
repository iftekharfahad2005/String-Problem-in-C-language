#include <stdio.h>
#include <string.h>

int main() {
    char str[200], clean[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if exists
    str[strcspn(str, "\n")] = '\0';

    // Skip leading spaces
    while (str[i] == ' ')
        i++;

    int space = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            clean[j++] = str[i];
            space = 0;  // reset after non-space
        } else {
            if (space == 0) { 
                clean[j++] = ' '; // add only one space
            }
            space = 1;
        }
        i++;
    }

    // Remove trailing space if exists
    if (j > 0 && clean[j - 1] == ' ')
        j--;

    clean[j] = '\0';

    printf("String after removing extra spaces: \"%s\"\n", clean);

    return 0;
}
