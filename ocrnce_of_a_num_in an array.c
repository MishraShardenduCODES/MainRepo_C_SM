#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Tell how many value -\t");
    scanf("%d",&n);          //n=5

    int ary[n];
    for(int i=0;i<n;i++){
        printf("Tell number ->");
        scanf("%d",&ary[i]);
    }

    //for(int i=0;i<n;i++){
    //    printf("%d \t",ary[i]);
    //}               

    int m;
    printf("Tell which no. you wanna check for ->");
    scanf("%d",&m);

    int q =0 ;
    for(int i=0;i<n;i++){
        if(m==ary[i]){
            q=q+1;
        }
        else{
            continue ;
        }
    }
    printf("%d comes %d times",m,q);

    return 0;
}
