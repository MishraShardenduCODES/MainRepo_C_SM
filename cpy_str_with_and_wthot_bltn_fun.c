//6. Write a C program to copy one string into another without using builtin function.
//7. Write a C program to copy one string into another using builtin function.
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
   pf("Tell  the first string in which u want to copy  :");
   char str[1000];
   fgets(str,1000,stdin);
   int a=strlen(str);
   pf("Tell the string u want to copy in first string  :");
   char str2[1000];
   fgets(str2,1000,stdin);
   int b=strlen(str2);
   pf("Using built in function         :");
   pf("%s \n",strcpy(str,str2));
   pf("without using built in function :");
   if(b>=a){
      for(int i=0;i<=b;i++){
         str[i]=str2[i];
      }
      pf("%s",str);
   }else if(a>b){
      for(int i=0;i<b;i++){
         str[i]=str2[i];
      }
      for(int i=b;i<=a;i++){
         str[i]= '\0';
      }
      pf("%s",str);
   }
   return 0;
}
