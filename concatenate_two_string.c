#include <stdio.h>

int main (){
    char str1[100],str2[100];
    int i,j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf("New string: %s ",str1);
    return 0;
}