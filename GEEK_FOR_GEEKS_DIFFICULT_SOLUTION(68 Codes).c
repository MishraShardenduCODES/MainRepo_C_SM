//Take Input and print largest number
#include <stdio.h>
int main(){
    int x=1,y;
    int a,b,c,d;
    printf("Tell a->");
    scanf("%d",&a);

    printf("Tell b->");
    scanf("%d",&b);

    if(a>b){
        while(x<2){
            printf("Tell next number ");
            scanf("%d",&c);
            if(c>a){
                a=c;
                d=c;
            }else{
                d=a;
            }
            printf("If you want to stop press 3 else press 1 ->");
            scanf("%d",&y);
            x=y;
        }
    }else {
        while(x<2){
            printf("Tell next number ");
            scanf("%d",&c);
            if(c>b){
                b=c;
                d=c;
            }else{
                d=b;
            }
            printf("If you want to stop press 3 else press 1 ->");
            scanf("%d",&y);
            x=y;
        }
    }


    printf("Largest no. = %d",d);

    return 0;
}

//reverse a sentence

#include<stdio.h>
#include<string.h>

int main(){
    char ogword[100];
    printf("Tell word \n");
    fgets(ogword,100,stdin);           //Takes a string input 
    
    int a; 
    a= strlen(ogword)-1 ;      //Eg.) Hard a= 4-1
                                   //     0123
    char revwrd[100];             

    for(int i=0; i<=a ;i++){
        revwrd[i]=ogword[a-i] ;      // revwrd 0 = og word 3
    }
    revwrd[a+1]='\0' ;       //so last word = \0 which is last word of any string in c

    printf("%s",revwrd);
    return 0;
}

//triangle right faced

//how to print n numbers of fibonaaci sequence
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Tell no. of column \n");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        for(int j=1; j<=i ;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=a; i>1; i--){
        for(int j=1 ;j<i ;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//triangle left faced

//how to print n numbers of fibonaaci sequence
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Tell no. of column \n");
    scanf("%d",&a);

    for(int i=1 ;i<=a ;i++){
        for(int j=1 ;j<=a-i ;j++){
            printf("   ");
        }
        for(int j=1 ;j<=i ;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=a-1 ;i>=1 ;i--){
        for(int j=1 ;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1 ; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}

//Q2.) how many times an element comes in a array

#include<stdio.h>
#include<math.h>
int main(){
    int n,a; 
    printf("Tell no. of element ->");
    scanf("%d",&n);

    int num[n];
    for(int i=0; i<=n-1; i++){
        printf("Tell element no %d : ",i+1);
        scanf("%d",&num[i]) ;
    }

    printf("Tell the no. you want to check :");
    scanf("%d",&a);

    int b=0 ;
    for(int i=0; i<=n-1; i++){
        if(num[i]==a){
            b++ ;
        }
    }
    if(b ==0 ){
        printf("The number dosent exist in the array");
    }else{
        printf("The number %d comes %d times in the array",a,b);
    }


    return 0;
}

//if a number exist in array or not

#include<stdio.h>
#include<math.h>
int main(){
    int n,a; 
    printf("Tell no. of element ->");
    scanf("%d",&n);

    int num[n];
    for(int i=0; i<=n-1; i++){
        printf("Tell element no %d : ",i+1);
        scanf("%d",&num[i]) ;
    }

    printf("Tell the no. you want to check :");
    scanf("%d",&a);

    int b=0 ;
    for(int i=0; i<=n-1; i++){
        if(num[i]==a){
            printf("The number %d is present at %d position",a,i+1);
            break;
        }else{
            b++ ;
        }
    }

    if(b == n){
        printf("The number dosent exist in the array");
    }

    return 0;
}

//Binary search and bubble sort

#include<stdio.h>
#include<math.h>
int main(){
    int n,m,a,b=0,stpr=0; 
    printf("Tell no. of element ->");
    scanf("%d",&n);
    m=n-1;
    int num[n];
    for(int i=0; i<=m; i++){
        printf("Tell element no %d :",i+1);
        scanf("%d",&num[i]) ;
    }
    printf("Old array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
    }
    printf("\b}");

    for(int i=0; i<=m; i++){
        for(int j=0; j<=m-i; j++){
            if(num[j]>num[j+1]){
                b=num[j+1];
                num[j+1]=num[j];
                num[j]=b ;
                stpr =1 ;
            }
        }
        if(stpr == 0){
            break ;
        }
    }
    printf("\n");
    printf("New array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
    }
    printf("\b}");

    printf("\n \n");
    int x;
    printf("Tell the data you want to search :");
    scanf("%d",&x);

    int low,high,mid ;
    low=0 ;
    high=m ;

    while (low <= high) {
        int mid = low + (high - low)/ 2;
        if (num[mid] == x){
            printf("%d is in the array at %d",x,mid+1);    
        }
        if(num[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }    
    }

    return 0;
}

//Q.1) Bubble sort

#include<stdio.h>
#include<math.h>
int main(){
    int n,m,a,b=0,stpr=0; 
    printf("Tell no. of element ->");
    scanf("%d",&n);
    m=n-1;
    int num[n];
    for(int i=0; i<=m; i++){
        printf("Tell element no %d :",i+1);
        scanf("%d",&num[i]) ;
    }
    printf("Old array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
    }
    printf("\b}");

    for(int i=0; i<=m; i++){
        for(int j=0; j<=m-i; j++){
            if(num[j]>num[j+1]){
                b=num[j+1];
                num[j+1]=num[j];
                num[j]=b ;
                stpr =1 ;
            }
        }
        if(stpr == 0){
            break ;
        }
    }
    printf("\n");
    printf("New array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
    }
    printf("\b}");
    return 0;
}

//Q3.) Binary value with an array 

#include<stdio.h>
#include<math.h>
int main(){
    printf("PLEASE TELL VALUE BEFORE AND AFTER DECIMAL SEPERATELY \n");
    int a,c=0,bin[100];
    printf("Tell the integral part ->");
    scanf("%d",&a);
    int d=a ;
    for(int i=0; a !=0 ;i++){
        bin[i]=a%2 ;
        a=a/2;
        c++;
    }
    int b,m,dec[3];
    printf("Tell the deciaml part ->");
    scanf("%3d",&b);
    int z=b;
    for(int j=0; j<=2; j++){
        m=b*2;
        if(m>1000){
            dec[j]=1 ;
            b=m-1000 ;
        }else{
            dec[j]=0 ;
        }
    }
    printf("Binary equ of %d.%d is \n",d,z);
    for(int i=c-1 ; i>=0; i--){
        printf("%d",bin[i]);
        printf("  ");
    }
    printf(".");
    for(int j=0; j<=2; j++){
        printf("%d",dec[j]);
        printf("  ");
    }
    return 0;
}

//Q4.) Binary value with an array 
#include<stdio.h>
#include<math.h>
int main(){
    int c=0,a,rem,bin=0;
    printf("Tell the number ->");
    scanf("%d",&a);
    int d=a;
    for(int i=0; d>0; i++){
        d=d/2;
        c++ ;
    }
    for(int i=0; i<c; i++){
        rem=a%2 ;
        bin= bin + rem*pow(10,i);
        a=a/2 ;
    }
    printf("%d",bin);
    return 0;
}

//Q.5) largest, smallest and average
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,a,b=0,stpr=0; 
    printf("Tell no. of element ->");
    scanf("%d",&n);
    m=n-1;
    int num[n];
    for(int i=0; i<=m; i++){
        printf("Tell element no %d :",i+1);
        scanf("%d",&num[i]) ;
    }
    printf("Old array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
    }
    printf("\b}");
    for(int i=0; i<=m; i++){
        for(int j=0; j<=m-i; j++){
            if(num[j]>num[j+1]){
                b=num[j+1];
                num[j+1]=num[j];
                num[j]=b ;
                stpr =1 ;
            }
        }
        if(stpr == 0){
            break ;
        }
    }
    float sum=0 ;
    printf("\n");
    printf("New array is :{");
    for(int i=0; i<=m; i++){
        printf("%d,",num[i]);
        sum = sum + num[i] ;
    }
    printf("\b}");
    printf("\n");
    printf(" Largest number is %d \n",num[m]);
    printf(" Smallest number is %d \n",num[0]);
    printf(" Average of the number is %f \n ",sum/n);
    return 0;
}

//sum of column
#include<stdio.h>
#include<math.h>
int main(){
    int m,n,sum=0 ;
    printf("Tell no of row : ");
    scanf("%d",&m);
    printf("Tell no of column : ");
    scanf("%d",&n);
    int num[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Tell element no (%d,%d) :",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    printf("The matrix is given by : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",num[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += num[j][i];
        }
        printf("Sum of column %d = %d \n",i+1,sum);
        sum=0 ;
    }

    return 0;
}

//sum of row 
#include<stdio.h>
#include<math.h>
int main(){
    int m,n,sum=0 ;
    printf("Tell no of row : ");
    scanf("%d",&m);
    printf("Tell no of column : ");
    scanf("%d",&n);
    int num[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Tell element no (%d,%d) :",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    printf("The matrix is given by : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",num[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += num[i][j];
        }
        printf("Sum of row %d = %d \n",i+1,sum);
        sum=0 ;
    }

    return 0;
}

//Hollow quadilatril 

#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Tell no. of column ->");
    scanf("%d",&a);
    printf("\n");

    for(int i=1;i<= 2*a+1;i++){
        printf(" * ");
    }
    printf("\n");

    for(int i=a; i>=1 ; i--){
        for(int j= i; j>=1; j--){
            printf(" * ");
        }
        for(int j=1;j<=2*(a-i+1)-1;j++){
            printf("   ");
        }
        for(int j= i; j>=1; j--){
            printf(" * ");
        }
        printf("\n");
    }

    for(int i=1; i<=a ; i++){
        for(int j= i; j>=1; j--){
            printf(" * ");
        }
        for(int j=1;j<=2*(a-i+1)-1;j++){
            printf("   ");
        }
        for(int j= i; j>=1; j--){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=1;i<= 2*a+1;i++){
        printf(" * ");
    }
    printf("\n");
    return 0;
}

//sum of all element,rows and column and if its a square matrix print diagonal
#include <stdio.h>
int main(){
    int a,b;
    printf("Tell the no. of rows :  ");
    scanf("%d",&a);
    printf("Tell the no. of column :  ");
    scanf("%d",&b);
    int mat[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Tell the element (%d,%d) : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    int suma=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            suma += mat[i][j]; 
        }
    }
    int sumr=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sumr += mat[i][j]; 
        }
        printf("Sum of row %d is %d \n",i+1,sumr);
        sumr=0;
    }
    int sumc=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            sumc += mat[j][i]; 
        }
        printf("Sum of column %d is %d \n",i+1,sumc);
        sumc=0;
    }
    printf("Sum of all element is = %d \n",suma);
    printf("THe matrix is given by \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("  %d  ",mat[i][j]);
        }
        printf("\n");
    }
    if(a==b){
        printf("The diagonal element are given by : \n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i == j ){
                    printf("  %d  ",mat[i][j]);
                }else{
                    printf("  _  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

//identity matrix or not

#include <stdio.h>
int main(){
    int a,b;
    int stpr =0 ;

    printf("Tell the no. of rows :  ");
    scanf("%d",&a);
    b=a;
    int mat[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Tell the element (%d,%d) : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i != j && mat[i][j] != 0){
                stpr = 1; break; 
            }else if(i == j && mat[i][j] !=1){
                stpr =1;  break;
            }
        }
        if(stpr ==1){
            printf("Not an identity matrix \n");
            break ;
        }
    }
    printf("The matrix is given by \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("  %d  ",mat[i][j]);
        }
        printf("\n");
    }
    
    if(stpr == 0){
            printf("It's an identity matrix \n");
    }

    return 0;
}

//upper lower triangle matrix

#include <stdio.h>
int main(){
    int a,b;
    int stpr =0 ;

    printf("Tell the no. of rows :  ");
    scanf("%d",&a);
    b=a;
    int mat[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Tell the element (%d,%d) : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The upper triangle matrix is given by : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i<=j){
                printf("  %d  ",mat[i][j]);
            }else{
                printf("  _  ");
            }
        }
        printf("\n");
    }

    printf("The  triangle matrix is given by : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j<=i){
                printf("  %d  ",mat[i][j]);
            }else{
                printf("  _  ");
            }
        }
        printf("\n");
    }

    printf("The original triangle matrix is given by : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("  %d  ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//length of string if u take input

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

    printf("Tell ->");
    char b[20];
    fgets(b,20,stdin);
    int a;
    a=strlen(b)-1 ;
    printf("Length of string b is %d \n",a);

    int length = 0;
    for(int i=1;b[i] != '\0';i++){
        length++ ;
    }

    printf("Length of string b is %d \n",length);


    return 0;
}

//reverse a string 

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    char str1[100];
    int len1;

    puts("Tell first string ->");
    fgets(str1,100,stdin);
    len1=strlen(str1) ;
    puts(str1);

    char c;
    for(int i=0;i<(len1-1)/2;i++){
        c = str1[i];
        str1[i]=str1[len1-2-i];
        str1[len1-2-i]=c;
    }

    puts(str1);

    return 0;
}

//reverse a string 

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    char str1[100];
    int len1;
    puts("Tell first string ->");
    fgets(str1,100,stdin);
    len1=strlen(str1) ;
    puts(str1);

    for(int i=0;i<=len1;i++){
        if(str1[i]<='z' && str1[i]>='a'){
            str1[i] -= 32; 
        }else if(str1[i]<='Z' && str1[i]>='A'){
            str1[i] += 32; 
        }
    }

    puts(str1);

    return 0;
}

//Factorial using recursion 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int fatc(int a);


int main(){
    printf("GIVE A NEGATIVE NO. TO  STOP AS FACTORIAL OF -VE DOSENT EXIST \n");
    int x;
    do{
        printf("Tell the number whose factorial you want : \n");
        scanf("%d",&x);
        printf("The factorial is = %d \n",fatc(x));
    }while( x>=0 );
    return 0;
}
int fatc(int a){
    if(a==0){
        return 1;
    }else{
        a=a*fatc(a-1);
        return a ;
    }
}

//saving info of students using structure array 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct student{
    int roll;
    char name[25];
    float marks ;
};

int main(){
    int a;
    struct student s[60];
    printf("How many students info do you wanna store (max: 60):  ");
    scanf("%d",&a);

    for(int i=0;i<a;i++){
        printf("Tell rollno. of student no.%d :  ",i+1);
        scanf("%d",&s[i].roll);
        printf("Tell name of student no.%d :  ",i+1);
        scanf("%s",s[i].name);
        printf("Tell marks of student no.%d :  ",i+1);
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Roll no\t     Name\t     Marks\n");
    for(int i=0;i<a;i++){
        printf("%d\t     %s\t     %f\n",s[i].roll,s[i].name,s[i].marks);
    }
}

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    FILE * fptr;
    char ch;
    int characters, words, lines;;
    fptr = fopen("Data.txt", "r");
    if (fptr == NULL){
        printf("\nUnable to open fptr.\n");
        printf("Please check if fptr exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    characters = 0, words = 0, lines= 1 ;
    while ((ch = fgetc(fptr)) != EOF){
        characters++;
        if(ch == '\n' || ch == '\0')
            lines++;
        if(ch == ' ' || ch == '\t'  || ch == '\n' || ch == '\0')
            words++;
    }
    if(characters >0){
        words++;
    }
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fptr);

    return 0;
}

//to copy text from 1 to other txt file
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    FILE*fptr;
    FILE*fptr2;
    char ch;
    fptr=fopen("Data.txt", "r");
    fptr2=fopen("Datacpy.txt","w");
    while ((ch = fgetc(fptr)) != EOF){
        fputc(ch,fptr2);
    }
    fclose(fptr);
    fclose(fptr2);
    return 0;
}

//malloc and calloc
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    int a,*ptr;
    printf("Tell no. of values u want :  ");
    scanf("%d",&a);
    ptr=(int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++){
        printf("Tell value %d :  ",i+1);
        scanf("%d",ptr+i);
    }
    puts("The value are : ");
    for(int i=0;i<a;i++){
        printf("  %d  ",*(ptr+i));
    }
    free(ptr);
    return 0;
}

//sum of complex no and vectors
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef struct complex{
    float n;
    float i;
}cmp ;

int main(){
    int a;
    printf("Tell how many complex mo. you want to store : ");
    scanf("%d",&a);
    cmp c[a];
    for(int i=0;i<a;i++){
        printf("Tell the value of %d real part : ",i+1);
        scanf("%f",&c[i].n);
        printf("Tell the value of %d img part : ",i+1);
        scanf("%f",&c[i].i);
    }
    printf("The complex no. are given by : \n");
    for(int i=0;i<a;i++){
        printf(" (%.2f) + ",c[i].n);
        printf(" (%.2f)i ",c[i].i);
        printf("\n");
    }
    float sumr=0,sumc=0 ;
    for(int i=0;i<a;i++){
        sumr += c[i].n ;
        sumc += c[i].i ;
    }
    printf("The sum of complex no is : (%f)\t+(%f)i\t ",sumr,sumc);
    return 0;
}

//sum of complex no and vectors using fun
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int cmpadd(int a);
typedef struct complex{
    float n;
    float i;
}cmp ;
int main(){
    int a;
    printf("Tell how many complex mo. you want to store : ");
    scanf("%d",&a);
    cmpadd(a);
    return 0;
}
int cmpadd(int a){
    int i=0;
    cmp c[a];
    for(int i=0;i<a;i++){
        printf("Tell the value of %d real part : ",i+1);
        scanf("%f",&c[i].n);
        printf("Tell the value of %d img part : ",i+1);
        scanf("%f",&c[i].i);
    }
    printf("The complex no. are given by : \n");
    for(int i=0;i<a;i++){
        printf(" (%.2f) + ",c[i].n);
        printf(" (%.2f)i ",c[i].i);
        printf("\n");
    }
    float sumr=0,sumc=0 ;
    for(int i=0;i<a;i++){
        sumr += c[i].n ;
        sumc += c[i].i ;
    }
    printf("The sum of complex no is : (%.2f)\t+(%.2f)i\t ",sumr,sumc);
    return 0;
}

//sum of complex no and vectors using array
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Tell how many complex mo. you want to store : ");
    scanf("%d",&a);
    float arrx[a],arry[a],sumx=0,sumy=0;
    printf("Tell the vector : \n");
    for(int i=0;i<a;i++){
        printf("Tell the x part of %d vector :",i+1);
        scanf("%f",&arrx[i]);
        printf("Tell the y part of %d vector :",i+1);
        scanf("%f",&arry[i]);
        printf("The vector is %.2f + %.2fi  \n",arrx[i],arry[i]);
        sumx+=arrx[i];
        sumy+=arry[i];
    }
    printf("The sum of vector is (%.2f) + (%.2f)i",sumx,sumy);  
    return 0;
}

//a-z
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    pf("\n The small alphabet are \n");
    for(int i=0;i<26;i++){
        printf("  %c  ",65+i);
    }

    pf("\n The cap alphabet are \n");
    for(int i=0;i<26;i++){
        printf("  %c  ",97+i);
    }
    return 0;
}

//fib seq
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int x;
    pf("How many terms you want \n");
    sf("%d",&x);
    int a=0,b=1,fib[x];
    fib[0] = a;
//  pf("%d  ",fib[0]);
    fib[1] = b;
//  pf("%d  ",fib[1]);
    for(int i=2;i<x;i++){
        fib[i]= a+b ;
        a=b;
        b=fib[i];
    }
    pf("The fibonaaci seq is given by \n");
    for(int i=0;i<x;i++){
        pf("%d  ",fib[i]);
    }
    return 0;
}

//HCF of 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int a,b;
    pf("Tell first no. : ");
    sf("%d",&a);
    pf("Tell first no. : ");
    sf("%d",&b);
    int HCF=0;

    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i == 0 && b%i ==0 ){
                HCF = i ;
            }
        }
    }else{
        for(int i=1;i<=a;i++){
            if(a%i == 0 && b%i ==0 ){
                HCF = i ;
            }
        }
    }
    pf("HCF = %d",HCF);
    return 0;
}

//lcm of given no 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int a,b,x;
    pf("Tell the first no. : ");
    sf("%d",&a);
    pf("Tell the second no. : ");
    sf("%d",&b);
    if(a>b){
        x=a;
    }else{
        x=b;
    }
    int i;
    for(i=x;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            break;
        }
    }
    printf("The LCM = %d",i);
    return 0;
}

//prime no in a range  
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf

int isprime(int num);

int main(){
    int a,b,max,min;    
    pf("Tell from where : ");
    sf("%d",&a);
    pf("Tell till where : ");
    sf("%d",&b);
    max= (a>b)?a:b;
    min= (a<b)?a:b;
    for(int i=min;i<max;i++){
        isprime(i);
    }

    return 0;
}
int isprime(int num){
    int a,stpr=0;
    a=pow(num,0.5);
    for(int i=2;i<=a;i++){
        if(num==1){
            pf("One is neither prime nor composite ");
            break ;
        }

        if(num%i == 0){
            pf("The number %d isnt prime \n",num);
            break;
        }else{
            stpr ++;
        }
    }
    if(stpr==a-1){
        pf("The num %d is a prime no. \n",num);
    }
    return 0;
}

//Armstrong  
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int num,ndgt=0;
    pf("Tell the no. : ");
    sf("%d",&num);
    int m=num ;
    for(int i=1;;){
        int x;
        x=num/i;
        i=i*10;
        if(x==0){
            break;
        }
        ndgt++;
    }
    int a;
    a=pow(10,ndgt-1); //100
    int b,d,c,e,z=0;
    for(int i=1;i<=ndgt;i++){
        b=num%a; //23  //3   //0  
        c=num-b; //100  //20  //3
        d=c/a;  //1 //2  //3
        e=pow(d,ndgt); //1^3  //2^3   //3^3
        z=z+e; //1  //1+8 //1+8+27
        a=a/10;  //10  //1  //0
        num=num-c; //23  //3  //0
    }
    if(z==m){
        pf("Yes, the number %d is an Armstrong no.",m);
    }else{
        pf("The no. is not an Armstrong no. as the sum of digit to power of no. of digit = %d",z);
    }
    return 0;
}

//Armstrong  in a range (modified) 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 

int armstr(int num);

int main(){
    int a,b,min,max;
    pf("Tell from where : ");
    sf("%d",&a);
    pf("Tell from where : ");
    sf("%d",&b);
    max = (a>b) ? a:b ;
    min = (a<b) ? a:b ;
    for(int i=min;i<=max;i++){
        armstr(i);
    }
    return 0;
}
int armstr(int num){
    int ndgt=0;
    int m=num ;
    for(int i=1;;){
        int x;
        x=num/i;
        i=i*10;
        if(x==0){
            break;
        }
        ndgt++;
    }
    int a;
    a=pow(10,ndgt-1); //100
    int b,e,z=0;
    for(int i=1;i<=ndgt;i++){
        b=num%a; //23  //3   //0  
        e=pow((num-b)/a,ndgt); //1^3  //2^3   //3^3
        z=z+e; //1  //1+8 //1+8+27
        a=a/10;  //10  //1  //0
        num=b; //23  //3  //0
    }
    if(z==m){
        pf("Yes, the number %d is an Armstrong no. \n",m);
    }else{
        pf("The no. %d is not an Armstrong no. as the sum of digit to power of no. of digit = %d \n",m,z);
    }
    return 0;
}

//palindrome  
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 


int main(){
    int num,ncpy,count=0;
    pf("Tell the number : ");
    sf("%d",&num);
    ncpy=num;
    for(int i=1;;){
        int x;
        x=num/i; //123
        i=i*10;
        if(x==0){
            break;
        }
        count++;
    }
    int a=pow(10,count-1); //100
    int b,c,d,dig[count];

    for(int i=0;i<count;i++){
        b=num%a; //23  //3
        c=(num-b)/a; //1 //2
        dig[i]=c ; //1
        num=b; //23
        a=a/10; //10
    }
    int stpr =0; 
    for(int i=0;i<count/2;i++){
        if(dig[i] !=dig[count-i-1]){
            pf("This number %d is not a palindrome",ncpy);
            break;
        }else{
            stpr = 1;
        }
    }
    if(stpr==1){
        printf("The no. %d is a palindrome",ncpy);
    }
    return 0;
}

//reverse number 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf 
int main(){
    int num,ncpy,count=0;
    pf("Tell the number : ");
    sf("%d",&num);
    ncpy=num;
    for(int i=1;;){
        int x;
        x=num/i; //123
        i=i*10;
        if(x==0){
            break;
        }
        count++;
    }
    int a=pow(10,count-1); //100
    int b,c,d,dig[count];
    for(int i=0;i<count;i++){
        b=num%a; //23  //3
        c=(num-b)/a; //1 //2
        dig[i]=c ; //1
        num=b; //23
        a=a/10; //10
    }
    int stpr =0;
    pf("The reverse number is : \n");
    for(int i=count-1;i>=0;i--){
        printf("%d",dig[i]);
    }
    return 0;
}

//factors of a num
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf


int main(){
    int num,r;
    pf("Tell the number :  ");
    sf("%d",&num);
    r=pow(num,0.5);
    pf("The factors of %d are : \n",num);
    for(int i=1;i<=r;i++){
        if(num%i==0){
            pf("(%d)x(%d) \n",i,(num/i));
        }
    }
    return 0;
}

//neon no in a range    
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf


int main(){
    int a,b,max,min;    
    pf("Tell from where : ");
    sf("%d",&a);
    pf("Tell till where : ");
    sf("%d",&b);
    max= (a>b)?a:b;
    min= (a<b)?a:b;
    for(int i=min;i<max;i++){
        isneon(i);    
    }
    return 0;
}
int isneon(int x){
    int num,count=0,cpy=x;
    num=pow(x,2);

    for(int i=1;;){
        int x2;
        x2=num/i;
        i=i*10;
        if(x2==0){
            break;
        }
        count++ ;
    }
    int a,b,c,d,z=0,e;
    a=pow(10,count-1); //100
    for(int i=0;i<count;i++){
        b=num%a ;
        c=num-b;
        d=c/a ;
        z=z+d;
        num=b;
        a=a/10;
    }
    if(z==cpy){
        printf("Yes %d is a neon no.\n",cpy);
    }else{
        pf("No %d is not neon no. \n",cpy);
    }
    return 0;
}

//fib seq and sum of odd and even places 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf


int main(){
    int n;
    pf("Tell how many terms u want : ");
    sf("%d",&n);
    int a=0,b=1,fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=a+b;
        a=b;
        b=fib[i];
    }
    int sumo=0,sume=0;
    pf("\n The seq is given by : \n");
    for(int i=0;i<n;i++){
        pf("%d\t",fib[i]);
        if(i==1 || i%2 !=0){
            sumo+= fib[i];
        }else{
            sume+= fib[i];
        }
    }
    pf("\n");
    pf("The sum at odd places is : %d",sumo);
    pf("\n");
    pf("The sum at even places is : %d",sume);
    return 0;
}

//pascals triangle 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf

int factorial(int a);

int main(){
    int n;
    pf("Tell the height of triangle : ");
    sf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            pf("     ");
        }
        for(int j=1;j<=i;j++){
            pf("    %d     ",factorial(i-1)/(factorial(j-1)*factorial(i-j)));
        }
        pf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            pf("     ");
        }
        for(int j=1;j<=i;j++){
            pf("    %d     ",factorial(i-1)/(factorial(j-1)*factorial(i-j)));
        }
        pf("\n");
    }

    return 0;
}


int factorial(int a){
    int fact =1 ;
    if(a==0){
        fact=1;
        return fact ;
    }else{
        for(int i=a;i>=1;i--){
            fact = a*factorial(a-1);
            return fact ;
        }
    }
}

//is a num sum of 2 prime 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int isprime(int num);
int main(){
    int a;
    pf("Tell the number : ");
    sf("%d",&a);
    int stpr=0;
    if(a%2==0 /*even*/){
        int x,y;
        x=a/2;
        y=a/2;
        for(; x!=a-1||y!=1;x++,y--){
            if(isprime(x) == 1 && isprime(y) == 1){
                pf("Yes it can be represented as sum of 2 prime : (%d) + (%d) = (%d) \n",x,y,a);
                break ;
            }else{
                stpr++;
            }
        }
        if(stpr == (a/2)-1){
            printf("No %d cant be reprsented as sum of 2 prime \n",a);
        }
    }else if(a%2 !=0 /*odd*/){
        int x,y;
        x=(a+1)/2;
        y=(a-1)/2;
        for(; x!=a-1||y!=1;x++,y--){
            if(isprime(x) == 1 && isprime(y) == 1){
                pf("Yes it can be represented as sum of 2 prime : (%d) + (%d) = (%d) \n ",x,y,a);
                break ;
            }else{
                stpr++;
            }
        }
        if(stpr == (a/2)-1){
            printf("No %d cant be reprsented as sum of 2 prime \n",a);
        }
    }

    return 0;
}
int isprime(int num){
    int a,stpr=0;
    a=pow(num,0.5);
    for(int i=2;i<=a;i++){
        if(num==1){
            pf("One is neither prime nor composite ");
            return 0;
            break ;
        }
        if(num%i == 0){
            //pf("The number %d isnt prime \n",num);
            return 0 ;
            break;
        }else{
            stpr ++;
        }
    }
    if(stpr==a-1){
        //pf("The num %d is a prime no. \n",num);
        return 1 ;
    }
}

//hcf using function
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define sf scanf

int hcf(int a,int b);
int main(){
    int a,b;
    pan ;
    sf("%d",&a);
    pan ;
    sf("%d",&b);
    hcf(a,b);
    return 0;
}

int hcf(int a,int b){
    int min,hcf;
    //pf("%d",min= (a<b)?a:b);
    for(int i=1;i<=min;i++){
        if(a%i ==0 && b%i==0){
            hcf = i;
        }
    }
    pf("The HCF = %d",hcf);
}

//power using recurssion
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define sf scanf

int power(int a,int b);
int main(){
    int a,b;
    pan;
    sf("%d",&a);
    pf("To which power you want : ");
    sf("%d",&b);

    pf("%d",power(a,b));

    return 0;
}
int power(int a,int b){
    if(b==1){
        return a;
    }else{
        a=a*power(a,b-1);
    }
}

//Bubble sort ,ascending , descending, avg , max and min 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define sf scanf



int main(){
    int a,stpr=0,b;
    float c=0;
    pf("Tell no of element :");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        pf("Tell the element (%d) : ",i+1);
        sf("%d",&arr[i]);
    }
    pf("The array is given by : { ");
    for(int i=0;i<a;i++){
        pf(" %d ,",arr[i]);
    }
    printf("\b }");
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            if(arr[j]>arr[j+1]){
                b=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=b ;
                stpr = 1;
            }
            if(stpr == 0){
                break;
            }
        }
    }
    pf("\n");
    pf("The array in ascending order is given by : { ");
    for(int i=0;i<a;i++){
        pf(" %d ,",arr[i]);
        c=c+arr[i];
    }
    printf("\b }\n"); 
    pf("The array in descending order is given by : { ");
    for(int i=a-1;i>=0;i--){
        pf(" %d ,",arr[i]);
    }
    printf("\b } \n \n");
    pf("The maximum no. is : %d\n",arr[a-1]);
    pf("The minimum no. is : %d\n",arr[0]);
    pf("The average of the no. is : %.2f\n",c/a);
    return 0;
}

//Binary search 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define sf scanf



int main(){
    int a,stpr=0,b,d;
    float c=0;
    pf("Tell no of element :");
    scanf("%d",&a);
    d=a;
    int arr[a];
    for(int i=0;i<a;i++){
        pf("Tell the element (%d) : ",i+1);
        sf("%d",&arr[i]);
    }
    pf("The array is given by : { ");
    for(int i=0;i<a;i++){
        pf(" %d ,",arr[i]);
    }
    printf("\b }");
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            if(arr[j]>arr[j+1]){
                b=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=b ;
            }
        }
    }
    pf("\n");
    pf("The array in ascending order is given by : { ");
    for(int i=0;i<a;i++){
        pf(" %d ,",arr[i]);
    }
    pf("\b } \n");

    int l,r,mid;
    int data;
    l=0 ;
    r=d-1 ;
    mid=(l+r)/2 ;
    pan;
    scanf("%d",&data);
    while(1){
        if(arr[mid] == data){
            pf("The no %d is at %d place \n",data,mid+1);
            break;
        }else if(arr[mid] > data){
            r=mid-1 ;
            mid=(l+r)/2 ;
        }else if(arr[mid]<data){
            l=mid+1 ;
            mid=(l+r)/2 ;
        }
        if(arr[mid] != data && l>r){
            printf("The data isnt in array \n");
            break ;
        }   
    }    

    return 0;
}

/*
*/

//Time and date
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define sf scanf

//find common elements
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
    int a,b;
    pf("Tell how many elements you want :");
    sf("%d",&a);
    int num[a];

    for(int i=0;i<a;i++){
        pf("Tell element (%d) :",i+1);
        sf("%d",&num[i]);
    }

    pf("Tell how many elements you want in second array :");
    sf("%d",&b);
    int num2[b];
    for(int i=0;i<b;i++){
        pf("Tell the elements for second array (%d) :",i+1);
        sf("%d",&num2[i]);
    }
    pf("The common elements are :{ ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(num[i]==num2[j]){
                pf("%d,",num[i]);
            }
        }
    }
    pf("\b }");

    return 0;
}

//C Program for Program for array rotation
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
    int a,b;
    pf("Tell no of elements :");
    sf("%d",&a);
    int num[a];
    for(int i=0;i<a;i++){
        pf("Tell element no (%d) : ",i+1);
        scanf("%d",&num[i]);
    }
    pf("The Array is :");
    for(int i=0;i<a;i++){
        pf("%d ",num[i]);
    }
    pf("Tell no of rotations you want :");
    sf("%d",&b);
    for(int j=0;j<b;j++){
        int temp; 
        temp=num[0];
        for(int i=1;i<a;i++){
            num[i-1]=num[i];
        }
        num[a-1]=temp;
    }
    pf("\n The Array after rotation is :");
    for(int i=0;i<a;i++){
        pf("%d ",num[i]);
    }
    return 0;
}

//C Program to Sort the 2D Array Across Rows
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b;
    pf("Tell how many rows you want : ");
    scanf("%d",&a);
    pf("Tell how many columns you want : ");
    scanf("%d",&b);
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the element at %d row and %d column :",i+1,j+1);
            scanf("%d",&num[i][j]);
        }
    }
    pf("The original array :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",num[i][j]);        
        }
        pf("\n");
    }
    int t = 0; 
    for (int i = 0; i < a; i++) { 
        for (int j = 0; j < b; j++) {        
            for (int k = 0; k < b - j - 1; k++) { 
                if (num[i][k] > num[i][k + 1]){
                    t = num[i][k]; 
                    num[i][k] = num[i][k + 1]; 
                    num[i][k + 1] = t; 
                } 
            } 
        } 
    }
    pf("The sortted array is :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",num[i][j]);
        }
        pf("\n");
    }
    return 0;
}

//C Program to find equal matrix
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b,c,d;
    pf("Tell how many rows you want : ");
    scanf("%d",&a);
    pf("Tell how many columns you want : ");
    scanf("%d",&b);
    while(1){
        pf("Tell how many rows you want (in second array): ");
        scanf("%d",&c);
        pf("Tell how many columns you want (in second array): ");
        scanf("%d",&d);
        if(a!=c || b!=d){
            pf("Please try again. If 2 matrices have different no of rows and column they cant be equal.\n");
        }else if(a==c && b==d){
            break ;
        }
    }
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the element at %d row and %d column :",i+1,j+1);
            scanf("%d",&num[i][j]);
        }
    }
    int num2[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the element at %d row and %d column(int second array):",i+1,j+1);
            scanf("%d",&num2[i][j]);
        }
    }
    pf("The 1st matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }
    pf("The 2nd matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num2[i][j]);
        }
        pf("\n");
    }
    int  stpr=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(num[i][j]!=num2[i][j]){
                stpr=1;
                break ;
            }
        }
    }
    if(stpr == 1 ){
        pf("They are'nt equal matrix");
    }else{
        pf("They are equal matrix");
    }
    return 0;
}

//Transpose of a Matrix in C
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b;
    pf("Tell how many rows you want : ");
    scanf("%d",&a);
    pf("Tell how many columns you want : ");
    scanf("%d",&b);
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the (%d,%d) element :",i+1,j+1);
            sf("%d",&num[i][j]);
        }
    }
    int num2[b][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            num2[j][i]=num[i][j];
        }
    }
    pf("The original array :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }
    pf("The transpose of the array :\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            pf("%d ",num2[i][j]);
        }
        pf("\n");
    } 
    return 0;
}

//C Program to Find Determinant of a Matrix
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
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
    int s=1,det ,b[q][q],m,n ;
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

//C Program to Find normal and trace
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
int nrmltra(int mat[a][a],int x);
int main(){
    printf("Tell the number of rows/column : ");
    scanf("%d",&a);
    int mat[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("Tell the elment (%d,%d) :  ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is given by \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    nrmltra(mat,a);
    return 0;
}
int nrmltra(int mat[a][a],int a){
    int n=0;
    pf("The Trace of matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            n+=(mat[i][j]*mat[i][j]);
            if(i==j){
                pf(" %d ",mat[i][j]);
            }else{
                pf(" _ ");
            }
        }
        pf("\n");
    }
    int v=pow(n,0.5);
    pf("The Normal = %d",v);
    return 0;
}

//C Program to multiply 2 matrix
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b,c,d;
    pf("Tell the no of rows (in first Matrix) :");
    sf("%d",&a);
    pf("Tell the no of column (in first Matrix) :");
    sf("%d",&b);
    while(1){
        pf("Tell the no of rows (in second Matrix) :");
        sf("%d",&c);
        if(c==b){
            break;
        }else{
            pf("The No of column in first matrix should be = no of rows in second \n");
        }
    }
    pf("Tell the no of column (in second Matrix) :");
    sf("%d",&d);
    int num[a][b],num2[b][d];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element (%d,%d) :",i+1,j+1);
            sf("%d",&num[i][j]);
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<d;j++){
            pf("Tell element for other matrix (%d,%d) :",i+1,j+1);
            sf("%d",&num2[i][j]);
        }
    }
    int sum,mulmat[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            sum=0;
            for(int k=0;k<b;k++){
                sum+=num[i][k]*num2[k][j];
            }
            mulmat[i][j]=sum;
        }
    }
    pf("The First matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",num[i][j]);
        }
        pf("\n");
    }
    pf("The Second matrix is given by :\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<d;j++){
            pf(" %d ",num2[i][j]);
        }
        pf("\n");
    }
    pf("The Product matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            pf(" %d ",mulmat[i][j]);
        }
        pf("\n");
    }
    return 0;
}

//C Program to print boundary element
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b,c,d;
    pf("Tell the no of rows (in first Matrix) :");
    sf("%d",&a);
    pf("Tell the no of column (in first Matrix) :");
    sf("%d",&b);
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element (%d,%d) :",i+1,j+1);
            sf("%d",&num[i][j]);
        }
    }
    pf("The First matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",num[i][j]);
        }
        pf("\n");
    }
    pf("The Boundary element of first matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==0 || j==0 || i==a-1 || j==b-1){
                pf(" %d ",num[i][j]);
            }
            else{
                pf(" _ ");
            }
        } 
        pf("\n");
    }
    return 0;
}

//C Program to print boundary element
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,b,c,d;
    pf("Tell the no of rows (in first Matrix) :");
    sf("%d",&a);
    pf("Tell the no of column (in first Matrix) :");
    sf("%d",&b);
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element (%d,%d) :",i+1,j+1);
            sf("%d",&num[i][j]);
        }
    }
    pf("The First matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",num[i][j]);
        }
        pf("\n");
    }
    pf("The Boundary element of first matrix is given by :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==0 || j==0 || i==a-1 || j==b-1){
                pf(" %d ",num[i][j]);
            }
            else{
                pf(" _ ");
            }
        } 
        pf("\n");
    }
    return 0;
}

//C Program to Interchange Elements of First and Last in a Matrix Across Rows
//C Program to Interchange Elements of First and Last in a Matrix Across Columns
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int a=0,b=0;
int clminv(int num[a][b],int a,int b);
int rowinv(int num[a][b],int a,int b);
int main(){
    pf("Tell the no of rows (in first Matrix) :");
    sf("%d",&a);
    pf("Tell the no of column (in first Matrix) :");
    sf("%d",&b);
    int num[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell element (%d,%d) :",i+1,j+1);
            sf("%d",&num[i][j]);
        }
    }
    pf("The original array is :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }
    clminv(num,a,b);
    rowinv(num,a,b);
    return 0;
}
int clminv(int num[a][b],int a,int b){
    int temp;
    for(int i=0;i<a;i++){
        temp=num[i][0];
        num[i][0]=num[i][b-1];
        num[i][b-1]=temp;
    }
    pf("The array if first and last columns are inverted :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }
}
int rowinv(int num[a][b],int a,int b){
    int temp;
    for(int i=0;i<b;i++){
        temp=num[0][i];
        num[0][i]=num[a-1][i];
        num[a-1][i]=temp;
    }
    pf("The array if first and last rows are inverted :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("%d ",num[i][j]);
        }
        pf("\n");
    }

}

//C Program to Add or Concatenate Two Strings
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str1[1000],str2[1000];
    pf("Tell the first string you want to input :");
    fgets(str1,1000,stdin);
    str1[strcspn(str1, "\n")] = ' ';
    pf("Tell the second string you want to input :");
    fgets(str2,1000,stdin);
    //str2[strcspn(str2, "\n")] = ' ';
    char str3[1000];
    int i=0,j=0;
    while(str1[i]!='\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    j++;
    i=0;
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++; 
    }
    str3[strcspn(str3, "\n")] = ' ';
    str3[j]='\0';
    pf("The string is given by : %s",str3);
    return 0;
}

//C Program to Add 2 Binary Strings
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int dtb(int sum);
int btd(char str1[1000]);
int main(){
    int a,b,c,sum;
    char str1[1000],str2[1000];
    pf("Tell first binary : ");
    fgets(str1,1000,stdin);
    a=btd(str1);
    pf("Tell second binary : ");
    fgets(str2,1000,stdin);
    b=btd(str2);
    sum=a+b;
    int c1=0,rem,bin=0;  
    int d=sum; 
    for(int i=0; d>0; i++){ 
        d=d/2; 
        c1++ ; 
    }
    for(int i=0; i<c1; i++){ 
        rem=sum%2 ; 
        bin= bin + rem*pow(10,i); 
        sum=sum/2 ; 
    } 
    printf("%d",bin);
    return 0;
}
int btd(char str1[1000]){
    int a,sum=0,b,c;
    a=strlen(str1)-1;  //3
    for(int i=a-1;i>=0;i--){  //2
        b=pow(2,i); 
        if(str1[a-1-i]=='1'){
            c=b*1;
        }else{
            c=b*0;
        }
        sum+=c;
        c=0;
    }
    return sum;
}

//Find first non-repeating character of given String
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str[1000];
    int b=0;
    pas;
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")] = ' ' ;
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[i] != str[j]){
                b+=1;
            }
        }
        if(b==strlen(str)-1){
            pf("The first uncommon element is :%c",str[i]);
            break; 
        }
        b=0;
    }
    return 0;
}

//C Program to Sort a String
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    char str2[1000];
    pas;
    fgets(str2,1000,stdin);
    int a,b,max;
    a=strlen(str1);
    b=strlen(str2);
    max=a>b?a:b;
    int stpr=0;
    for(int i=0;i<=max;i++){
        if(str1[i]>str2[i]){
            pf("%d.) %s\n",i+1,str1);
            pf("%d.) %s\n",i+2,str2);
            break;
        }else if(str1[i]<str2[i]){
            pf("%d.) %s\n",i+1,str2);
            pf("%d.) %s\n",i+2,str1);
            break;
        }else{
            stpr++;
        }
    }
    if(stpr==max+1){
        printf("They are same \n");
    }
    return 0;
}
//C Program to find a panagram
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    int a=0,b=0;
    for(int i=0;str1[i]!='\0';i++){
        if(isupper(str1[i])){
            str1[i]=tolower(str1[i]);
        }
        a++;
    }
    for(int i=0;i<=25;i++){
        if('a'+i !=str1[i]){
            pf("It's not a Panagram \n");
            break ;
        }else{
            b++;
        }
    }
    if(b==26){
        pf("It's a Panagram \n");
    }
    return 0;
}
//C Program to Print the First Letter of Each Word
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    pf("The first letter of every word is :\n");
    for(int i=0;str1[i]!='\0';i++){
        if(i==0&&str1[i]!=' '){
            pf("%c ",str1[i]);
        }else if(str1[i]==' ' ){
            pf("%c ",str1[i+1]);
        }
    }
    return 0;
}
//C Program to Determine the Unicode/ASCII Code Point at a Given Index
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    for(int i=0;str1[i]!='\0';i++){
        pf("The Unicode for %c element :%d at index (%d) \n" ,str1[i],str1[i],i);
    }
    return 0;
}
//C Program to remove leading 0's
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int q=0;
int rmvspc(char str1[q]);
int main(){
    int a;
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!='0'){
            a=i;
            break;
        }
    }
    for(int i=0;i<=a;i++){
        if(str1[i] == '0' ){
            str1[i]=' ';
        }
    }
    rmvspc(str1);
    return 0;
}
int rmvspc(char str1[q]){
    char temp;
    for(int i=0;i<strlen(str1);i++){
        for(int j=0;j<strlen(str1);j++){
            if(str1[i] == ' '){
                temp=str1[i];
                str1[i]=str1[i+1];
                str1[i+1]=temp;
            }
        }
    }
    pf("The string after removing leading '0' is :%s",str1);
    return 0;
}
//C Program to Split a String into a Number of Sub-Strings without spaces and in next line both(remove all spaces)
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
    int
    main()
{
    char str[1000];
    pas;
    fgets(str,1000,stdin);
    char *token = strtok(str, " ");
    while(token != NULL)
    {
        pf("%s\n",token);
        token=strtok(NULL," ");
    }
    return 0;
}
//C Program For Boolean to String Conversion
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
    int main()
{
    bool n;
    pf("Tell True or False :");
    sf("%s",&n);
    if (n == true)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }
    return 0;
}
//C Program to convert float to an array
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
    int q = 0;
int ndgt(int a);
int itgstr(int a,int len,char*str);
int main(){
    int x,l,k;
    float a;
    pf("Tell a float number :");
    sf("%f",&a);
    pf("Tell how many digit after decimal you want :");
    sf("%d",&l);
    k=pow(10,l);
    char  str[1000];
    int itg= (int)a;
    x=ndgt(itg);
    itgstr(itg,x,str);
    str[x]='.';
    float flt = a - (float)itg;
    int fitg=flt*k;
    itgstr(fitg,l,str);
    pf("The Float/int value in string form : %s",str);
}
int ndgt(int a){
    int x=0,y;
    for(int i=1;;){
        y=a/i;
        i=i*10;
        if(y==0){
            break;
        }
        x+=1;
        pf("%d",x);
    }
    return x;   
}
int itgstr(int a,int len,char*str){
    char num[1000];
    int x,y,z;//100
    z=pow(10,len-1);
    for(int i=0;i<len;i++){
        x=a%z;
        y=(a-x)/z;
        str[i]=y+'0';
        a=x;
        z=z/10;
    }
    return*str;
}
