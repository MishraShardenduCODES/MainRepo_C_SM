//Structure program practice
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define endl printf("\n");
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
typedef struct stud{
    char Name[50];
    int roll_no;
    float marks;
}st ;
int main(){
    int a;
    pf("How many studnst detail you want to mention : ");
    sf("%d",&a);
    st s[a];
    for(int i=0;i<a;i++){
        pf("Tell name of the student %d        : ",i+1);
        scanf("%s",&s[i].Name);

        pf("Tell Roll Number of the student %d : ",i+1);
        sf("%d",&s[i].roll_no);

        pf("Tell the marks of the student %d   : ",i+1);
        sf("%f",&s[i].marks);

        endl;
    }
    for(int i=0;i<a;i++){
        pf("The Name of the student is %s his roll no is %d and the marks he got = %f \n",s[i].Name,s[i].roll_no,s[i].marks);
    }

    return 0;
}
