#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print frequency of each character
    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
