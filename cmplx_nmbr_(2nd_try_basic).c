#include<stdio.h>
#include<string.h>
#include<math.h>

struct clx{
    int real;
    int img ;
} s;

int cmpadd(struct clx c1,struct clx c2);

int main(){

    struct clx c1={10,5};
    struct clx c2={5,3};

    cmpadd(c1,c2);
    return 0;
}

int cmpadd(struct clx c1,struct clx c2){
    printf("Sum of real = %d \n",(c1.real+c2.real));
    printf("Sum of imaginary = %d \n",(c1.img+c2.img));
    return 0;
}
