#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i,j=0,k=0,l=0;
    printf("Enter string: ");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        for(i=0;str[i]!='\0';i++){
            if(str[i]>'A' && str[i]<'Z'||str[i]>'a'&& str[i]<'z'){
                j++;
            }
            else if(str[i]>'0'&&str[i]<'9'){
                k++;
                }
            else
            l++;
        }
        printf("Alphabet: %d\n",j);
         printf("Number: %d\n",k);
          printf("Special character: %d\n",l);
    return 0;
}