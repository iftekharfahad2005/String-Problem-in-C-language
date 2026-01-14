#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, end, start;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    int len = strlen(str);

    printf("Reversed word order: ");

    end = len - 1;

    while(end >= 0) {

        while(end >= 0 && str[end] == ' ') {
            end--;
        }
        if(end < 0) break;

        start = end;
        while(start >= 0 && str[start] != ' ') {
            start--;
        }
        for(i = start + 1; i <= end; i++) {
            printf("%c", str[i]);
        }
        if(start > 0) {
            printf(" ");
        }
        end = start - 1;
    }

    printf("\n");
    return 0;
}
