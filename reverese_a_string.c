//9. Write a C program to reverse a given string and print.
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
   char str[1000],b;
   fgets(str,1000,stdin);
   int a=strlen(str)-1;
   for(int i=0;i<=a/2;i++){
      b=str[i];
      str[i]=str[a-i];
      str[a-i]=b;
   }
   puts(str);
   return 0;
}
