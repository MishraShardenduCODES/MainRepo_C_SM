//determinant of a matrix

#include<stdio.h>
#include<math.h>
int q=0;
int deter(int mat[q][q],int x);
int main(){
    printf("Tell the number of rows/column : ");
    scanf("%d",&q);
    int mat[q][q];
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            printf("Tell the elment (%d,%d) :  ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is given by \n");
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    int d;
    d=deter(mat,q);
    printf("The determinant = %d",d);
    return 0;
}
int deter(int mat[q][q],int x){
    int s=1,i,j,det ,b[q][q],m,n ;
    if( x==1 ){
        return (mat[0][0]) ;
    }else {
        det =0 ;
        for(int c=0;c<x;c++){
            m=0,n=0;
            for(int i=0;i<=x-1;i++){
                for(int j=0;j<x;j++){
                    b[i][j] = 0 ;
                    if(i!= 0 && j!=c){
                        b[m][n]=mat[i][j] ;
                        if(n< (x-2)){
                            n++ ;
                        }else{
                            n=0;
                            m++ ;
                        }
                    }
                }
            }
            det += s*(mat[0][c]*deter(b,x-1)) ;
            s= (-1)*s; 
        }
    }
    return (det) ;
}
