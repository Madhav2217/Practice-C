#include<stdio.h>
#include<conio.h>
float num1=12.37;   //Global Variable

void func1(){
    printf("This is the value of global variable = %f \n", num1);
}

void func2(){
    printf("This is the value of global variable = %f \n", num1);
}

int main(){
    func1();
    func2();
    return 0;
}