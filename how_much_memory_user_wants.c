#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    printf("Tell how much memory u want ->");
    int n;
    scanf("%d",&n);

    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        float a;
        printf("Tell ->");
        scanf("%f",&a);
        ptr[i]=a;
    }

    for(int i=0;i<n;i++){
        printf("%d \n",(*(&ptr[i]))) ;
    }
    return 0;
}
