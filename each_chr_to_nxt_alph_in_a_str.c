//9. Write a program to convert each character of a string into the next alphabet and print the string.
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
    pas;
    gets(str);
    int b;
    b=strlen(str);

    for(int i=0;i<b;i++){
        if((str[i] <= 'Z' && str[i] >= 'A') || (str[i] <= 'z' && str[i] >= 'a')){
            str[i] = str[i] + 1 ;
        } 
    }
    puts(str);

    return 0;
}
