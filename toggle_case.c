#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    printf("Enter string: ");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>'A'&& str[i]<'Z'){
                str[i]=str[i]+32;
            }
            else if(str[i]>='a'&& str[i]<='z'){
                str[i]=str[i]-32;
            }
            
        }
        printf("toggle string: %s",str);
    return 0;
}