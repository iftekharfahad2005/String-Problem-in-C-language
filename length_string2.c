#include <stdio.h>

int main (){
    char str[100];
    int i,length=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    printf("Lenght of the string: %d",length);
    return 0;
}