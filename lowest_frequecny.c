#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    char minChar;
    int min;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    min = 1000;
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0 && freq[i] < min) {
            min = freq[i];
            minChar = (char)i;
        }
    }

    printf("Lowest frequency character: '%c' occurs %d time(s).\n", minChar, min);

    return 0;
}
