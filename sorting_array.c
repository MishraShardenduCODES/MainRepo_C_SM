//8. Write a C program with a function to sort an array of integers in ascending order.
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
int bubsrt(int arr[a],int a);
int main(){
    pf("Tell how many element you wanwt in an array :");
    sf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        pf("Tell element at position (%d) :",i);
        sf("%d",&arr[i]);
    }
    bubsrt(arr,a);
    pf("The sorted array is given by : \n");
    for(int i=0;i<a;i++){
        pf("%d ",arr[i]);
    }
    return 0;
}
int bubsrt(int arr[a],int a){
    int temp,stpr=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                stpr=1;
            }
        }
        if(stpr==0){
            break;
        }
    }
    return 0;
}
