//10. Write a C program to reverse order of words in a given string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
   pf("Tell the main string  :");
   char str[1000];
   fgets(str,1000,stdin);
   char str2[1000];
   int a=strlen(str);
   for(int i=0;i<a;i++){
      str2[i]=str[a-2-i];
   }
   str[a-1]= '\0';
   int cmp=0;
   pf("The original string is :%s \n",str);
   pf("The reversed string is :%s \n",str2);
   cmp=strcmp(str,str2);
   if(cmp==0){
      pf("It's a palindrome ");
   }else{
      pf("It's not a palindrome");
   }
   return 0;
}
