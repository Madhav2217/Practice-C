#include<stdio.h>   //header file
void main(){        //main function of void type
    int a = 20;     //variable a of value 20.
    while (a>1)     //checking if value of a is greater than 1, with loop.
    {
        printf("The value of a = %d\n", a);
        a=a-2;      //decreasing value of a by 2.
    }
}