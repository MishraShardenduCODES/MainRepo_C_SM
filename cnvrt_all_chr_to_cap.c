//6. Write a C program with a function that will read a string and convert all characters to capital letters.
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int stcp(char str[1000]);
int main(){
    char str[1000];
    pf("Tell a string :");
    fgets(str,1000,stdin);
    stcp(str);
    pf("The string is given by :%s",str);
    return 0;
}
int stcp(char str[1000]){
    for(int i=0;i<=strlen(str)-1;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    return 0;
}
