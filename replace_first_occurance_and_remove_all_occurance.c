//4.)Write a C program to replace first occurrence of a character with another in a string.
//5.)Write a C program to remove all occurrences of a character from string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int q=0;
int rpsone(char arr2[q],char a,char b);
int rpsall(char arr3[q],char a,char b);
int main(){
    char str[1000],str2[1000],str3[1000];
    pas;
    fgets(str,1000,stdin);
    strcpy(str2,str);
    strcpy(str3,str);
    pf("Tell the charecter you want to replace and the charecter you want in place of it : ");
    char chr,chn;
    sf("%c %c",&chr,&chn);
    pf("The original string is : %s",str);
    pf("IF YOUR'RE INPUT IS -> \"IIIT DWD\" AND YOU WANT TO REPLACE \"I\" WITH \"Z\" YOU'RE OUTPUT WILL BE -> \"ZIIT DWD\" \n");
    rpsone(str2,chr,chn);
    pf("IF YOUR'RE INPUT IS -> \"IIIT DWD\" AND YOU WANT TO REPLACE \"I\" WITH \"Z\" YOU'RE OUTPUT WILL BE -> \"ZZZT DWD\" \n");
    rpsall(str3,chr,chn);
    return 0;
}
int rpsone(char arr2[q],char a,char b){
    for(int i=0;i<=strlen(arr2)-1;i++){
        if(arr2[i]==a){
            arr2[i]=b;
            break;
        }
    }
    pf("The output is ->");
    puts(arr2);
}
int rpsall(char arr3[q],char a,char b){
    for(int i=0;i<=strlen(arr3)-1;i++){
        if(arr3[i]==a){
            arr3[i]=b;
        }
    }
    pf("The output is ->");
    puts(arr3);
}
