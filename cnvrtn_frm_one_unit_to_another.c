/*10. Write functions to convert feet to inches, convert inches to centimeters, and convert centimeters to meters. 
Write a program that prompts a user for a measurement in feet and converts and outputs this value in meters.
Facts to use: 1 ft = 12 inches, 1 inch = 2.54 cm, 100 cm = 1 meter.*/
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
float fti(float a);
float itc(float a);
float ctm(float a);
float ftm(float a);

int main(){
    pf("Press 1 for FEET TO INCHES \n");
    pf("Press 2 for INCH TO CENTI-METERS \n");
    pf("Press 3 for CENTI-METERS TO METERS \n");
    pf("Press 4 for FEET TO METERS \n");
    float a;
    pf("Tell the value :");
    sf("%f",&a);
    pf("Which value are you giving and what do you want it to be converted to : ");
    int x;
    sf("%d",&x);
    switch(x){
        case 1:pf("%f feet in inches = %finches  \n",a,fti(a));break;
        case 2:pf("%f inch in centimeter = %fcm  \n",a,itc(a));break;
        case 3:pf("%f centimeters in meter = %fm \n",a,ctm(a));break;
        case 4:pf("%f feet in meter = %fm        \n",a,ftm(a));break;
        default:pf("Invalid option");
        return 0;
    }
}
float fti(float a){
    return (12*a);
}
float itc(float a){
    return (2.54*a);
}
float ctm(float a){
    return (a/100) ;
}
float ftm(float a){
    float d=fti(a);
    float e=itc(d);
    float f=ctm(e);
    return f;
}
