#include<stdio.h>//#-pre processor directive   .h-header files
#include<conio.h>
void main(){//main function  void datatype
    float num1 = 12.36, num2 = 23.89, Product;//variables   float datatype
//    clrscr();   ClearScreen    It clears any stored cache.
    Product = num1*num2;//operation     =(assignment),*(arithmetic) operators
    printf("The product is = %f", Product);//display   %f format specifier
    getch();//holding output screen.
}