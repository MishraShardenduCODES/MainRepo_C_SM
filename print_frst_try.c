#include<stdio.h>
#include<math.h>

int main(){
    int b,c,x;
    printf("Tell-> \n");
    scanf("%d",&x);

    c=pow(x,0.5);

    int a;
    a=1;
    if(x==0){
        printf("neither prime nor composite \n");
    } else if(x==1 || x==2) {
        printf("Its a prime \n");
    } else if (x<0){
        printf("Negative number arent prime \n");
    } else {
        for(int i=2;i<=c;i++){
        b=x%i;
        a=a*b;
        }
        if(a==0){
        printf("Not a prime \n");
        } else {
        printf("Prime \n");         //282589933 //282,589,933
        }
    }
    return 0;
}
