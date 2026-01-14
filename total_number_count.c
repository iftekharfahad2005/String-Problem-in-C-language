#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i,j=0,k=0,l=0;
    printf("Enter string: ");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        for(i=0;str[i]!='\0';i++){
            if(str[i]>'0'&&str[i]<'9'){
                j++;
            } 
        }
        printf("Total number: %d\n",j);
    return 0;
}