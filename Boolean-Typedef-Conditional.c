#include<stdio.h>
#include<stdbool.h>
void main(){
    typedef bool bl;
    bl a = true;
    (a==true) ? printf("The value of a = %d", a):printf("The value of a is not = %d", a);
    printf("\n%d", 2==3);    //This checks the condition and gives output in 0 and 1
}