#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Tell grade you wanna know of student (1-5) \n");
    scanf("%d",&a);

    switch(a){
        case 1 : printf("Marks bw 100-90 Pass");
        break;
        case 2 : printf("Marks bw 90-70 Fail");
        break;
        case 3 : printf("Marks bw 70-60 Fail");
        break;
        default: printf("Failure bruh how did u even get that?");
    }
    return 0 ;
}
