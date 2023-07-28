#include<stdio.h>                               //header
#define var1 23                                 //pre-processor
void main(){
    typedef float fl;                           //change float to fl
    static fl var2 = 2.7;                       //static variable
    var2++;                                     //increment of static variable
    const fl var3 = 4.9;                        //constant variable
    printf("%d \n%f \n%f", var1, var2, var3);   //display of variables
}