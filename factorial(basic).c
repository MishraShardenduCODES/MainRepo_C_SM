#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Tell - \n");
    scanf("%d",&x);
    int a;
    a=1;
    if(x<0){
        printf("Factorial of -ve no. dont exist");
    } else if(x==0){
        printf("Factorial of 0 = 1");
    } else{
        for(int i=1;i<=x;i++){
            a=a*i;
            printf("%d \n",a);
        } 
    }
    return 0;
}
