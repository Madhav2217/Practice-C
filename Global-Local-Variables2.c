#include<stdio.h>
int A = 12;     //Global Variable
void func1(){
    printf("%d", A);
}
void main(){
    int A = 23; //Local Variable
    printf("%d", A);
    func1();
}