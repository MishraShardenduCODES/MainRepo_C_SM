//8. Write a C program to remove the white spaces (blank spaces) from a string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define spf sprintf
#define sf scanf

int main(){
    char str[100];
    char a;
    pas;
    gets(str);
    int b;
    b=strlen(str);
    for(int i=0;i<=b;i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            for(int j=i;j<=b;j++){
            a=str[j];
            str[j]=str[j+1];
            str[j+1]=a;
            }
        }
    }
    puts("The string without spaces is given by :");
    puts(str);
    return 0;
}
