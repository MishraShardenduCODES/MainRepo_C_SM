#include<math.h>
#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,x,y,z;
    z=0;
    printf("Tell the number - ");
    scanf("%d",&x);                      //326
    printf("Tell how many digit no. - ");
    scanf("%d",&a);                 //3
    int q;
    q=x;
    //printf("%d \n",q);
    b=a-1;
    //printf("%d \n",b);
    c=pow(10,b);               //c=100
    //printf("%d \n",c);          
    for(int i=0;i<a;i++){
        d = x%c ;         //d=26   //d=6   //d=0
        e=x-d;            //e=300     //e=20    //e=6     
        f = e/c;          //f=3     //f=2   //f=6
        g = pow(f,a);        //g= 3^3    // 2^3      //6^3
        x=x-e;          //x=26         //x=6      //0
        c=c/10;         //c= 10        //c=1      //.1
        z=z+g;
        //printf("%d \n",g);
        //printf("%d \n",z);
    }
    //printf("%d \n",z);
    int m;
    m= z-q;
    //printf("%d",m);
    if (m==0){
        printf("Youre nu. is armstrong %d",q);
    } else {
        printf("Youre number isnt armstrong ");
    }
    return 0;
}
