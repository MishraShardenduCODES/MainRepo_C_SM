#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){
    char pass[100];
    printf("Tell ->");
    fgets(pass,100,stdin);
    

    char str_fin[10];
    printf("Tell which charecter u wanna find ->");
    fgets(str_fin,10,stdin);

    int count =0;

    for(int i=0;pass[i] != '\0';i++){
        if(pass[i] == *str_fin ){
            count++;
        } else {
            continue ;
        }
    }
    printf("No of times %c comes = %d",str_fin,count);
}
