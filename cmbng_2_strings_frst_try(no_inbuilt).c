#include<stdio.h>
#include<math.h>

int main(){
    char fstnm []= "Shardendu";
    char lstnm []= "Mishra";
    
    for(int i=0;fstnm[i] != '\0';i++){
        printf("%c",fstnm[i]);
    }
    
    printf("\n");

    for(int i=0;lstnm[i] != '\0';i++){
        printf("%c",lstnm[i]);
    }

    return 0;
}
