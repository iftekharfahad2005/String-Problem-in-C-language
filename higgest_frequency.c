#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Highest frequency character: '%c' occurs %d time(s).\n", maxChar, max);

    return 0;
}
