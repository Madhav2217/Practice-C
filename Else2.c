#include<stdio.h>
void main(){
    int input_age;
    printf("Enter your age = ");
    scanf("%d", &input_age);
    if (input_age>=18)
    {
        printf("You are elligible to vote.");
    }
    else
    {
        printf("You are not elligible to vote.");
    }
}