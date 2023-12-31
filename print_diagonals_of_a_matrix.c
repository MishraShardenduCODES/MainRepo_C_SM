//7. Write a C Program to read a matrix and print diagonals
//There are 2 diagonals in a matrix a.) Principle and b.) Secondary
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Tell the no. of rows for your matirx : ");
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
    printf("The Principle diagonal is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                printf(" %d ",mat[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("The Secondary diagonal is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i+j == n-1){
                printf(" %d ",mat[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
