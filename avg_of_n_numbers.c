#include <stdio.h>
int main(){
    float a,b=0;
    int c=0 ;
    for(int i=0;i!=1;){
        printf("Tell ->");
        scanf("%f",&a);
        b=b+a;
        c=c+1 ;
        int x ;
        printf("Press 1 to stop else to continue ->");
        scanf("%d",&x);
        if(x == 1 ){
            break ;
        }
    }

    printf("Average of the numbers = %f",b/c);
    return 0;
}
