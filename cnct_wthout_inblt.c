//7. Write a C program with a function to add a string to the end of another string without using any library function.
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
int stadd(char str[1000],char str2[1000]);
int main(){
    char str[1000],str2[1000];
    pf("Tell the main string :");
    fgets(str,1000,stdin);
    pf("Tell the string you want to add :");
    fgets(str2,1000,stdin);
    stadd(str,str2);
    pf("The concatinated string is :%s",str);
    return 0;
}
int stadd(char str[1000],char str2[1000]){
    int a=strlen(str)-1;
    int b=strlen(str2)-1;
    int j=0;
    str[a]=' ';
    for(int i=a+1;i<=a+b+2;i++){
        str[i]=str2[j];
        j++;
    }
}
