#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    if(str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
}

    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
