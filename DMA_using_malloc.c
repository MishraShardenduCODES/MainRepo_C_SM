#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));

    for(int i=0;i<5;i++){
        float a;
        printf("Tell ->");
        scanf("%f",&a);
        ptr[i]=a;
    }

    for(int i=0;i<5;i++){
        printf("%f \n",ptr[i]) ;
    }
    return 0;
}
