#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    FILE*fptr;
    char str[100];
    fptr=fopen("Math.txt","w");
    printf("Tell ->");
    fgets(str,100,stdin);
    fprintf(fptr,"%s",str); 

    fclose(fptr);

    FILE*fmptr;
    fmptr=fopen("Math.txt","r");

    char stra;
    for(int i =0; stra !=EOF;i++){
        stra=fgetc(fmptr);  
        printf("%c",stra);
    }

    fclose(fmptr);
    return 0;
}
