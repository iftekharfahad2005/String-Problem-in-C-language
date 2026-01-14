#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i;
    printf("Enter string in uppercase: ");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        for( i=0;str[i]!='\0';i++){
            if(str[i]>='A'&& str[i]<='Z'){
                str[i]=str[i]+32;
            }
        }
        printf("lowercase string: %s",str);
    return 0;
}