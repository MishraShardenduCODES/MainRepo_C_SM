#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Tell no. - \n");
    scanf("%d",&x);

    if (x>=1){
        printf("Its a natural number");
    } else if(x==0){
        printf("Its a whole no. 0");
    } else {
        printf("Its a negative number");
    }
    return 0;
}
