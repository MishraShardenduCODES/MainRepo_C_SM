#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    printf("Tell till which fibonacci u wanna print -> ");
    scanf("%d",&a);

    if (a==0){
        printf("0");
    } else if(a==1){
        printf("0 \n");
        printf("1 \n");
    } else {
        b=0;
        printf("%d \n",b);
        c=1;
        printf("%d \n",c);
        for(int i=1;i<=a-1;i++){
            d=b+c;
            printf("%d \n",d);
            b=c;
            c=d;
            }
    }
    return 0;
}
