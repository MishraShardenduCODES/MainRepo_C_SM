#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) calloc(5,sizeof(float));

    for(int i=0;i<5;i++){
        float a;
        printf("Tell ->");
        scanf("%f",&a);
        ptr[i]=a;
    }

    for(int i=0;i<4;i++){
        printf("%f \n",ptr[i]) ;
    }

    free(ptr);
    return 0;
}
