//4. Write a C program with a function to find the sum of digits of a given number.
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
int smdgt(int a);
int dgtcntr(int a);
int main(){
    int a;
    pf("Tell a number :");
    sf("%d",&a);
    int d=smdgt(a);
    pf("The sum of digits of number %d = %d",a,d);
    return 0;
}
int smdgt(int a){
    int temp=a;
    int len=dgtcntr(a);
    int z=pow(10,len-1);
    int b,c,d=0;
    for(int i=0;i<len;i++){
        b=a%z;  
        c=(a-b)/z;
        d=d+c;
        a=b;
        z=z/10; 
    }
    return d;
}
int dgtcntr(int a){
    int b,c=0;
    for(int i=1;;i=i*10){
        b=a/i;
        if(b==0){
            break ;
        }
        c+=1;
    }
    return c;
}
