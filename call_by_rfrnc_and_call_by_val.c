#include<stdio.h>
#include<math.h>

int xchng(int x,int y);
int xchng_a(int* x,int* y);

int main(){
    int a,b;
    a=3;
    b=4;
    printf("Value of a -> %d \n",a);
    printf("Value of b -> %d \n",b);

    xchng(a,b);
    xchng_a(&a,&b);
    printf("Value of a -> %d \n",a);
    printf("Value of b -> %d \n",b);

    return 0;
}

int xchng(int x,int y ){
    int t;
    t=x;
    x=y;
    y=t;
    printf("Value of a -> %d \n",x);
    printf("Value of b -> %d \n",y);
    return 0;
}

int xchng_a(int* x,int* y ){
    int m;
    m=*x;
    *x=*y;
    *y=m;
    
    return 0;
}
