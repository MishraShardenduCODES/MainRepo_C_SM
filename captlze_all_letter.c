//6. Write a C program that will capitalize all the letters of a string.
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
    int a=strlen(str);

    for(int i=0;i<=a;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    puts(str);
    return 0;
}
