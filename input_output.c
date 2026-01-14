#include <stdio.h>

int main (){
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    printf("The string is: ");
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}