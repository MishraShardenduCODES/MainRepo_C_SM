#include<stdio.h>
#include<string.h>
#include<math.h>


void slicer_r(char arr[]);


int main(){
    char pass [100];
    printf("Tell ->");
    fgets(pass,100,stdin);

    slicer_r(pass);
    
    return 0;
}


void slicer_r(char arr[]){
    char newstr[100];

    int a,b;
    printf("Tell from where ->");
    scanf("%d",&a);
    printf("Till where ->");
    scanf("%d",&b);
    

    strcpy(newstr,arr);
    
    for(int i=a+1;i<=b+1;i++){
        printf("%c",newstr[i]);
    }
}
