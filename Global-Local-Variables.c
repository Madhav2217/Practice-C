#include<stdio.h> // this is a header file
#include<conio.h>//header
int num2=92;   //global varibale

void func1(){
    printf("This is the value of global variable = %d \n", num2);
}

void func2(){
    int num3=27;
    printf("This is the value of local variable of func2 = %d \n", num3);
    printf("This is the value of the global variable = %d \n", num2);
//    printf("This is the value of thbe local variable of main = %d \n", num1);
}

int main(){
    int num1=7;    //local variables
    printf("The value of local variable is = %d \n", num1);    //display local variable

    func1();    //call to the func1
    func2();

    return 0;
}