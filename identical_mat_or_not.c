//10. Write a C program to check two matrices are identical or not
//For any two matrices to be equal, a number of rows and columns in both the matrix should be equal and the corresponding elements should also be equal.
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,stpr=0;
    printf("Tell the no. of rows for your matirx : ");
    scanf("%d",&n);
    printf("Tell the no. of column for your matirx : ");
    scanf("%d",&m);

    int a,b;
    printf("Tell the no. of rows for your second matirx : ");
    scanf("%d",&a);

    printf("Tell the no. of column for your second matirx : ");
    scanf("%d",&b);

    if ( n != a || m != b ){
        printf("The row and column of first and second matirx should be equal so this isnt possible.(Please try again) \n");
    }else{

        int mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("Tell the element on (%d,%d) position for first matrix: ",i,j);
                scanf("%d",&mat[i][j]);
            }
        }
        int mat2[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("Tell the element on (%d,%d) position for second matrix: ",i,j);
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("The matrix is given by : \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf(" %d ",mat[i][j]);
            }
            printf("\n");
        }
        printf("The Second matrix is given by : \n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf(" %d ",mat2[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mat[i][j] != mat2[i][j]){
                    stpr =1;
                }
            }
        }
        if(stpr==1){
            printf("The Matrices arent identical");
        }else{
            printf("The Matrices are identical");
        }

    }
    return 0;
}
