#include<math.h>
#include<stdio.h>

int oddcntr(int ary[],int m);


int main(){
    
    int n;
    printf("Tell no of term =");
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Tell no. =");
        scanf("%d",&arr[i]);
    }
    //int ary={1,2,3,4,5};
    oddcntr(arr,n);
    return 0;
}

int oddcntr(int ary[],int m){
    int x=0;
    for(int j=0;j<m;j++){
        if(ary[j]%2==0){
            continue ;
            }
        else {
            x=x+1;
            }
    }
    printf("no of odd = %d",x);
}
