#include<stdio.h>  
#include<math.h>
#include<string.h>

int main(){
    struct student {
        char name[100];
        int age;
        float cgpa;
    };

    struct student s1;
    strcpy(s1.name,"Shardendu");
    s1.age = 15;
    s1.cgpa = 9.4;

    printf("Student name = %s \n",s1.name);
    printf("Student name = %d \n",s1.age);
    printf("Student name = %f \n",s1.cgpa);

    printf("\n");

    struct student s2;
    strcpy(s2.name,"Mishra");
    s2.age = 17;
    s2.cgpa = 9.0;

    printf("Student name = %s \n",s2.name);
    printf("Student name = %d \n",s2.age);
    printf("Student name = %f \n",s2.cgpa);

    printf("\n");


    struct student s3;
    strcpy(s3.name,"Singh");
    s3.age = 13;
    s3.cgpa = 9.8;

    printf("Student name = %s \n",s3.name);
    printf("Student name = %d \n",s3.age);
    printf("Student name = %f \n",s3.cgpa);

    printf("\n");

    return 0;
}
