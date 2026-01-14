#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    // Remove duplicates
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; ) {
            if(str[i] == str[j]) {
                // Shift characters left to remove duplicate
                for(k = j; str[k] != '\0'; k++) {
                    str[k] = str[k+1];
                }
            } else {
                j++;
            }
        }
    }

    printf("String after removing repeated characters: %s\n", str);
    return 0;
}
