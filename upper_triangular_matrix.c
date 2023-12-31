//5. Write a C program to print the upper triangular matrix
//An upper triangular matrix is a square matrix, whose all elements below the principal diagonal are zeros
#include<stdio.h>
#include<math.h>
int main(){
    int n,det;
    printf("Tell the no. of rows/column for your matirx : ");
    scanf("%d",&n);

    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Tell the element on (%d,%d) position : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i > j ){
                mat[i][j] = 0 ;
            }
        }
    }
    printf("The upper triangular matrix is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }    
    return 0;
}
