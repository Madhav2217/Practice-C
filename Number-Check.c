//Q.Check if the number is positive, negetive or zero, using ternary operator.
#include<stdio.h>
#include<conio.h>
void main(){
    int A;
    printf("Enter one number = ");
    scanf("%d", &A);
    (A>0) ? printf("The number is positive."):(A<0) ? printf("The number is negetive."):printf("Zero");
    getch();
}