//7. Write a C program that counts the total numbers of vowels and their frequency.
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
    char str[1000];
    int cnt_A=0,cnt_E=0,cnt_I=0,cnt_O=0,cnt_U=0;
    pas;
    gets(str);

    for(int i=0;i<=strlen(str);i++){
        if(str[i]== 'a' || str[i]== 'A'){
            cnt_A++ ;
        }else if(str[i]== 'e' || str[i]== 'E'){
            cnt_E++ ;
        }else if(str[i]=='i' || str[i]== 'I'){
            cnt_I++ ;
        }else if(str[i]=='o' || str[i]== 'O'){
            cnt_O++ ;
        }else if(str[i]=='u' || str[i]=='U'){
            cnt_U++ ;
        }
    }
    int cnt=cnt_A+cnt_U+cnt_E+cnt_I+cnt_O ;
    
    pf("The total no. of vowel in the String are : %d \n",cnt);
    pf("A or a comes %d times \nE or e comes %d times \nO or o comes %d times \nI or i comes %d times \nU or u comes %d times",cnt_A,cnt_E,cnt_O,cnt_I,cnt_U);
    return 0;
}
