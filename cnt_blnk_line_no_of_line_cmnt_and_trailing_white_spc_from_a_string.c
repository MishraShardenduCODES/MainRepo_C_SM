//6.)Write a C program to count no of lines, blank lines and comments in a given program.
//8.)Write a C program to trim both leading and trailing white space characters from given string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
#define fsf fscanf
int q=0;
char rmvspc(char*str);
int cntr();

int main(){
    char str[1000],str2[1000];
    pf("Tell the main string :");
    fgets(str,1000,stdin);
    strcpy(str2,str);
    rmvspc(str2);
    pf("The String without spaces :%s \n",str2);
    cntr();
    return 0;
}

char rmvspc(char*str){
    char a;
    int b,cnt;
    for(int i=0;i<=strlen(str);i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            for(int j=i;j<=strlen(str);j++){
            a=str[j];
            str[j]=str[j+1];
            str[j+1]=a;
            }
            cnt++;
        }
    }
    for(int i=0;i<=strlen(str);i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            rmvspc(str);
        }   
    }
    return*str;
}

int cntr(){
    int line_count = 0, cmm = 0,bl = 0;
    FILE *fptr;
    char ch;
    fptr = fopen("Hello.c", "r");
    while ((ch = fgetc(fptr))!= EOF) {
        if (ch  ==  '\n') {
            line_count++;
        }
        if (ch  ==  '\n') {
            if ((ch = fgetc(fptr))  ==  '\n')  {
                fseek(fptr, -1, 1);
                bl++;
            }  
        }
    }
    fseek(fptr, 0, 0);
    while ((ch = fgetc(fptr))!= EOF) {
        if (ch  ==  '/') {
            if ((ch = fgetc(fptr))  ==  '/')  {
                cmm++;
            }  
        }
    }
    printf("Total no of lines: %d\n", line_count);
    printf("Total no of comment line: %d\n", cmm);
    printf("Total no of blank lines: %d\n", bl);
    printf("Total no of non blank lines: %d\n", line_count-bl);
}
