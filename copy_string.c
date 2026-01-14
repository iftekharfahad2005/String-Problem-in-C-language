#include <stdio.h>

int main (){
    char str[100];
    char st[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0';i++){
        st[i]=str[i];
    }
    st[i]='\0';
    printf("Input string: %s\n",str);
    printf("Output string: %s\n",st);
    return 0;
}