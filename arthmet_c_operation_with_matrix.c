//9. Write a C program with a functions to perform addition, subtraction, and multiplication on two matrices depending upon the user’s choice.
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int a=0;
int b=0;
int add(int mat[a][b],int mat2[a][b]);
int sub(int mat[a][b],int mat2[a][b]);
int prd(int mat[a][a],int mat2[a][a]);
int main(){
    pf("Tell the no. of rows of the 2 matrices :");
    sf("%d",&a);
    pf("Tell the no. of column of the 2 matrices :");
    sf("%d",&b);
    int num[a][b],num2[a][b];
    pf("For 1st matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element at position (%d,%d) for first matrix :",i,j);
            sf("%d",&num[i][j]);
        }
    }
    pf("For 2nd matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element at position (%d,%d) for second matrix :",i,j);
            sf("%d",&num2[i][j]);
        }
    }
   pf("1st matrix is : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }
    pf("2nd matrix is : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num2[i][j]);
        }
        pf("\n");
    } 
    if(a==b){
        pf("What do want to do \nPress 1 for addition \nPress 2 for Substraction \nPress 3 for Multiplication \nTell your choice :");
        int x;
        sf("%d",&x);
        switch(x){
            case 1:add(num,num2);break;
            case 2:sub(num,num2);break;
            case 3:prd(num,num2);break;
            default:pf("Invalid option chose another ");break;
        }
    }else{
        pf("What do want to do \nPress 1 for addition \nPress 2 for Substraction \nTell your choice :");
        int x;
        sf("%d",&x);
        switch(x){
            case 1:add(num,num2);break;
            case 2:sub(num,num2);break;
            default:pf("Invalid option chose another ");break;
        }
    }
    return 0;
}
int add(int mat[a][b],int mat2[a][b]){
    int sm[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sm[i][j]=mat[i][j]+mat2[i][j];
            pf("%d ",sm[i][j]);
        }
        pf("\n");
    }
}
int sub(int mat[a][b],int mat2[a][b]){
    int dm[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            dm[i][j]=mat[i][j]+mat2[i][j];
            pf("%d ",dm[i][j]);
        }
        pf("\n");
    }
}
int prd(int mat[a][b],int mat2[a][b]){
    int prd[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            int sum=0;
            for(int k=0;k<a;k++){
                sum+=mat[i][k]*mat2[k][j];
            }
            prd[i][j]=sum;
        }
    }
    printf("The Product matrix is given by : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ",prd[i][j]);       
        }
        printf("\n");
    }
}
